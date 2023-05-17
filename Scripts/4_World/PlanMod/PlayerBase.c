modded class PlayerBase 
{
    autoptr PL_HallucinationsEffect_CL hallucination;
    // MARK: - Override Methods --------------------------------------------------------------------------

    override void OnJumpStart() {
        PL_StartHallucinations(); // hard effect
        // if (GetGame().IsClient()) {
		//         SpawnShockEffect(0.9); // slow effect
        // }
        super.OnJumpStart();
    }

    override void OnSprintStart() {
        PL_StopHallucinations();
        super.OnSprintStart();
    }

    // MARK: - Public methods --------------------------------------------------------------------------

    void PL_StartHallucinations() {
        if (!hallucination) {
            hallucination = new PL_HallucinationsEffect_CL();
        }
        hallucination.PL_SpawnHallucinationsEffect();
    }

    void PL_StopHallucinations() {
        if (hallucination) {
            hallucination.PL_DespawnHallucinationsEffect();
        }
    }
}
