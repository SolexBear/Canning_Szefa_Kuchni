modded class ActionConstructor
{
    override void RegisterActions(TTypenameArray actions)
    {
        super.RegisterActions(actions);
        actions.Insert(ActionCreateCanSalt);
		actions.Insert(ActionCreateCanSugar);
		actions.Insert(ActionCreateCanOcet);
		actions.Insert(ActionCreateJarOcet);
		actions.Insert(ActionCreateJarSugar);
		
		actions.Insert(ActionCreateMeatCanRabbit);
		actions.Insert(ActionCreateMeatCanCarp);
		actions.Insert(ActionCreateMeatCanMackerel);		
		actions.Insert(ActionCreateMeatCanBear);
		actions.Insert(ActionCreateMeatCanBoar);
		actions.Insert(ActionCreateMeatCanChicken);
		actions.Insert(ActionCreateMeatCanCow);		
		actions.Insert(ActionCreateMeatCanDeer);
		actions.Insert(ActionCreateMeatCanFox);
		actions.Insert(ActionCreateMeatCanGoat);
		actions.Insert(ActionCreateMeatCanPig);
		actions.Insert(ActionCreateMeatCanSheep);
		actions.Insert(ActionCreateMeatCanTrout);
		actions.Insert(ActionCreateMeatCanWalleyePollock);
		actions.Insert(ActionCreateMeatCanWolf);
		actions.Insert(ActionCreateMeatCanSardines);
		actions.Insert(ActionCreateMeatCanReindeer);
		actions.Insert(ActionCreateMeatCanLard);
		
		actions.Insert(ActionCreateFruitCanPear);
		actions.Insert(ActionCreateFruitCanApple);
		actions.Insert(ActionCreateFruitCanPlum);
		actions.Insert(ActionCreateFruitCanPumpkin);
		actions.Insert(ActionCreateFruitCanpotatoes);
		actions.Insert(ActionCreateFruitCanTomato);
		
		actions.Insert(ActionCreatePickledJarPear);
		actions.Insert(ActionCreatePickledJarAgaricusMushroom);
		actions.Insert(ActionCreatePickledJarBoletusMushroom);
		actions.Insert(ActionCreatePickledJarLactariusMushroom);
		actions.Insert(ActionCreatePickledJarMacrolepiotaMushroom);
		actions.Insert(ActionCreatePickledJarPleurotusMushroom);
		actions.Insert(ActionCreatePickledJarZucchini);
		actions.Insert(ActionCreatePickledJarPeppers);
		actions.Insert(ActionCreatePickledJarPumpkin);
		actions.Insert(ActionCreatePickledCanPeppers);
		
		actions.Insert(ActionCreateJamJarPear);
		actions.Insert(ActionCreateJamJarApple);
		actions.Insert(ActionCreateJamJarPlum);
		actions.Insert(ActionCreateJamJarPumpkin);
		actions.Insert(ActionCreateJamJarSambucusBerry);
		actions.Insert(ActionCreateJamJarCaninaBerry);
		
    }
}