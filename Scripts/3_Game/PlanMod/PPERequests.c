class PL_PPERequester_HalucinationEffect extends PPERequester_GameplayBase
{
	// MARK: - Override Methods -----------------------------------------

	override protected void OnStart(Param par = null) {
		super.OnStart();
		Print("Стартуем внутри уже эффекта");
		SetTargetValueFloat(PostProcessEffectType.GodRays,PPEGodRays.PARAM_INTENSITY,true,0,PPEGodRays.L_0_GLASSES,PPOperators.LOWEST);
		SetTargetValueColor(PostProcessEffectType.Glow,PPEGlow.PARAM_COLORIZATIONCOLOR,{0.3,0.3,0.1,0.0},PPEGlow.L_23_GLASSES,PPOperators.SUBSTRACT);
	}

	override protected void OnStop(Param par = null) {
		super.OnStop();
		Print("Тормозим внутри уже эффекта");
	}

	override protected void OnUpdate(float delta) {
		super.OnUpdate(delta);
		Print("Процесс обновления эффекта");
	}
}