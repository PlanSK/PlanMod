modded class PlayerBase  {

    // MARK: - Private Properties -----------------------------------------

    private autoptr PL_HallucinationsEffect hallucinationEffect;
    
    // Временная переменна для тестов
    private bool toggleEffect;

    // MARK: - Override Methods --------------------------------------------------------------------------

    override void OnJumpStart() {
        if (!toggleEffect) {
            PL_StartHallucinations();
        } else {
            PL_StopHallucinations();
        }
		toggleEffect = !toggleEffect;
        super.OnJumpStart();
    }

    // MARK: - Public methods --------------------------------------------------------------------------

    void PL_StartHallucinations() {
        this.PL_startHallucinations();
    }

    void PL_StopHallucinations() {
        this.PL_stopHallucinations();
    }

    // MARK: - Private Methods -----------------------------------------

    private void PL_startHallucinations() {
        if (GetGame().IsServer()) return;
        if (!hallucinationEffect) {
            hallucinationEffect = new PL_HallucinationsEffect(this);
        }
        hallucinationEffect.SpawnEffect();
    }

    private void PL_stopHallucinations() {
        if (GetGame().IsServer()) return;
        if (!hallucinationEffect) return;
        hallucinationEffect.DespawnEffect();
    }
}
