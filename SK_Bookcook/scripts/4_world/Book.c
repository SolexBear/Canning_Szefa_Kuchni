class SK_Bookcook extends ItemBase
{
    override void SetActions()
    {
        super.SetActions();
        AddAction(ActionOpenSK_Bookcook);
    }
}

modded class ModItemRegisterCallbacks
{
    override void RegisterOneHanded(DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior)
    {
        super.RegisterOneHanded(pType, pBehavior);
        pType.AddItemInHandsProfileIK("SK_Bookcook", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/gear/book.anm");
    };
};
