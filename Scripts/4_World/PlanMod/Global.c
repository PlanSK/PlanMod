class PL_Global: Managed {
	// Сервис для порождения входной точки для своих менеджеров.

	// MARK: - Public Properties -----------------------------------------

	static ref PlanModManager planModManager;

	// MARK: - Public Methods -----------------------------------------

	static void InitializeUnits() {
		planModManager = new PlanModManager();
	}
}