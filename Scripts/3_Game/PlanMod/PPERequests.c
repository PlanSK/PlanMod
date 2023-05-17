class PL_PPERequester_HalucinationEffect extends PPERequester_GameplayBase
{
	override protected void OnStart(Param par = null)
	{
		super.OnStart();
		
		SetTargetValueFloat(PostProcessEffectType.GodRays,PPEGodRays.PARAM_INTENSITY,true,0,PPEGodRays.L_0_GLASSES,PPOperators.LOWEST);
		SetTargetValueColor(PostProcessEffectType.Glow,PPEGlow.PARAM_COLORIZATIONCOLOR,{0.4,0.3,0.5,0.3},PPEGlow.L_23_GLASSES,PPOperators.SUBSTRACT);
	}
}