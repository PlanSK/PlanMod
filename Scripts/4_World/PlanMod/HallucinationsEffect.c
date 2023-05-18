class PL_HallucinationsEffect: Managed {
    // Класс-сервис для PlayerBase. По ваниле реализовано прям внутри player-a + класс. 
    // Там они создают и удаляют объект такого класса, мб влияет как-то на оптимизацию, 
    // но по идее это прям хуйня.. хз
    // Я решил сторить сервис все время, но очищать от эффектов когда это необходимо.

    // MARK: - Private Properties -----------------------------------------

    private PlayerBase delegate;
    
    // MARK: - Init -----------------------------------------

    void PL_HallucinationsEffect(PlayerBase delegate) {
        this.delegate = delegate;
    }

    void ~PL_HallucinationsEffect() {
        stop();
    }

    // MARK: - Public Methods -----------------------------------------

    void SpawnEffect() {
       start();
    }

    void DespawnEffect() {
        stop();
    }

    void Update(float deltatime) {
        Print("Update in effect - " +  deltatime.ToString());
    }

    // MARK: - Private Methods -----------------------------------------

    private void setup() {
        Print("Setting up the hallucinationEffect");
    }

    private void start() {
        Print("Start method is run.");
        PPERequesterBank.GetRequester(PL_PPERequester_HalucinationEffect).Start();
        PPERequesterBank.GetRequester(PPERequester_FlashbangEffects).Start();
    }

    private void stop() {
        Print("Stop method is run.");
        PPERequesterBank.GetRequester(PL_PPERequester_HalucinationEffect).Stop();
    }
}