modded class Hologram
{	
	 ItemBase FurnitureCollision()
	{
		vector center;
		vector relative_ofset; 
		vector absolute_ofset = "0 0.01 0"; 
		vector orientation = GetProjectionOrientation();
		vector edge_length;
		vector min_max[2];
		ref array<Object> excluded_objects = new array<Object>;
		ref array<Object> collided_objects = new array<Object>;
		
		m_Projection.GetCollisionBox( min_max );
		relative_ofset[1] = ( min_max[1][1] - min_max[0][1] ) / 2.4;
		center = m_Projection.GetPosition() + relative_ofset + absolute_ofset;
		edge_length = GetCollisionBoxSize( min_max );
		excluded_objects.Insert( m_Projection );

		if ( GetGame().IsBoxColliding( center, orientation, edge_length, excluded_objects, collided_objects ) )
		{	
			for( int i = 0; i < collided_objects.Count(); i++ )
			{
				Object obj_collided = collided_objects[i];
				// ------------------------------------ //
				if( obj_collided.IsInherited(SK_Shelves_Cans_Holo) )
				{
					SK_Shelves_Cans_Holo var_CansHolo = SK_Shelves_Cans_Holo.Cast(obj_collided);
					return var_CansHolo;
				}
				if( obj_collided.IsInherited(SK_Shelves_Cans) )
				{
					SK_Shelves_Cans var_Cans = SK_Shelves_Cans.Cast(obj_collided);
					return var_Cans;
				}
				
				//----------------------------//				
			}
		}
		return null;
	} 

	override string ProjectionBasedOnParent()
	{
		ItemBase item_in_hands = ItemBase.Cast(m_Player.GetHumanInventory().GetEntityInHands());
		// ------------------------------------ //
		if (item_in_hands.IsInherited(SK_Shelves_Cans_Kit))
			return "SK_Shelves_Cans_Holo";
		//------------------------------------//
		return super.ProjectionBasedOnParent();
	}

	
    EntityAI PlaceEntity( EntityAI entity_for_placing )
    {    
		// ------------------------------------ //
		if ( entity_for_placing.IsInherited( SK_Shelves_Cans_Kit ) )
		{
			return entity_for_placing;
		}
		// ------------------------------------ //
		return super.PlaceEntity(entity_for_placing);

    } 
	
    override void EvaluateCollision( ItemBase action_item = null )
    {
			ItemBase m_Projection = m_Parent;
		// ------------------------------------ //
        if ( m_Projection.IsInherited(SK_Shelves_Cans))
		{
				if (IsCollidingZeroPos())
			{
				SetIsColliding( true );
					return;
			}
				else
			{
				SetIsColliding( false );
			};
		}	
		//----------------------//
		super.EvaluateCollision(); //super.EvaluateCollision(action_item);
	}
}

