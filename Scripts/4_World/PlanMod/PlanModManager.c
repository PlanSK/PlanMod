class PlanModManager: Managed {
	// Основной менеджер, который сторит вообще всю инфу по моду. Например конфигурации и тд.
	// Также отвечает за регистрацию эффектов.

	// MARK: - Init -----------------------------------------

	void PlanModManager() {
		setup();	
	}

	// MARK: - Private Methods -----------------------------------------

	private void setup() {
		Print("registrating mod PL_PPERequester_HalucinationEffect")
		PPERequesterBank.RegisterRequester(PL_PPERequester_HalucinationEffect);
	}
}