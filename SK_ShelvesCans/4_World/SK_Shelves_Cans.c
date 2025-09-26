class SK_Shelves_Cans : Container_Base
{
	
	override void EEInit()
	{
		super.EEInit();			
	}

	override bool CanDisplayAttachmentCategory( string category_name )
	{	
		return super.CanDisplayAttachmentCategory(category_name);
	}
	
	override string GetPlaceSoundset()
	{
		return "placeBarrel_SoundSet";
	}


	override bool CanPutInCargo( EntityAI parent )
	{
        return false;
	}
	
	override bool CanPutIntoHands( EntityAI parent )
	{
        return false;
	}
	
	override bool CanReceiveItemIntoCargo( EntityAI item )
	{
		return true;
	}

	override void SetActions()
	{
		super.SetActions();
	}
};
class SK_Base_Kit : ItemBase
{
	
	ref protected EffectSound 						m_DeployLoopSound;
	
	override void EEInit()
	{
		super.EEInit();
	}
	
	override void OnItemLocationChanged( EntityAI old_owner, EntityAI new_owner ) 
	{
		super.OnItemLocationChanged( old_owner, new_owner );
	}	
	
	override void OnVariablesSynchronized()
	{
		super.OnVariablesSynchronized();
		
		if ( IsDeploySound() )
		{
			PlayDeploySound();
		}
				
		if ( CanPlayDeployLoopSound() )
		{
			PlayDeployLoopSound();
		}
					
		if ( m_DeployLoopSound && !CanPlayDeployLoopSound() )
		{
			StopDeployLoopSound();
		}
	}
	
    override void SetActions()
    {
        super.SetActions();
        
        AddAction(ActionTogglePlaceObject);
		AddAction(ActionPlaceObject);
    }		
	
	override bool IsDeployable()
	{
		return true;
	}	
	
	override string GetDeploySoundset()
	{
		return "putDown_FenceKit_SoundSet";
	}
	
	override string GetLoopDeploySoundset()
	{
		return "BarbedWire_Deploy_loop_SoundSet";
	}
	
	void PlayDeployLoopSound()
	{		
		if ( GetGame().IsMultiplayer() && GetGame().IsClient() || !GetGame().IsMultiplayer() )
		{		
			m_DeployLoopSound = SEffectManager.PlaySound( GetLoopDeploySoundset(), GetPosition() );
		}
	}
	
	void StopDeployLoopSound()
	{
		if ( GetGame().IsMultiplayer() && GetGame().IsClient() || !GetGame().IsMultiplayer() )
		{	
			m_DeployLoopSound.SoundStop();
			delete m_DeployLoopSound;
		}
	}	
	
};

class SK_Shelves_Cans_Kit : SK_Base_Kit
{	
	protected Object								SK_Shelves_Cans1;

	void SK_Shelves_Cans_Kit()
	{
		RegisterNetSyncVariableBool("m_IsSoundSynchRemote");
	}

	override void OnPlacementComplete( Man player, vector position = "0 0 0", vector orientation = "0 0 0" )
	{
		super.OnPlacementComplete( player );
		
		PlayerBase pb = PlayerBase.Cast( player );
		if ( GetGame().IsServer() )
		{
			PlayerBase player_base = PlayerBase.Cast( player );
			vector newPosition = player_base.GetLocalProjectionPosition();
			vector newOrientation = player_base.GetLocalProjectionOrientation();
				
			SK_Shelves_Cans1 = GetGame().CreateObject("SK_Shelves_Cans", pb.GetLocalProjectionPosition(), false );
			SK_Shelves_Cans1.SetPosition( position );
			SK_Shelves_Cans1.SetOrientation( orientation );
		}	
		
		SetIsDeploySound( true );
		SetLifetime(3888000);
	}
}


class SK_Base_Holo : ItemBase {

};
 
class SK_Shelves_Cans_Holo : SK_Base_Holo
{

};



