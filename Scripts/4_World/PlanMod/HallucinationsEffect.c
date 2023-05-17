class PL_HallucinationsEffect_CL: Managed 
{
    ref Timer PL_hallucinationTimer_Start;
    ref Timer PL_hallucinationTimer_Stop;
    static const int REQ_HALLUCTNATIONCOLOR	= PPERequesterBank.RegisterRequester(PL_PPERequester_HalucinationEffect);
    
    void PL_SpawnHallucinationsEffect() 
    {
        
        if (GetGame().IsClient())
        {
            if (!PL_hallucinationTimer_Start) {
                PL_hallucinationTimer_Start = new Timer();
            }
            if (!PL_hallucinationTimer_Stop) {
                PL_hallucinationTimer_Stop = new Timer();
            }
            Print("Spawning hallucinations effect.");
            // float blur = 0.8;
            // float factor = 0.2;
            // float vignette = 0.4;
            // Param3<float,float,float> m_EffectParam = new Param3<float,float,float>(blur, factor, vignette);
            // PPERequesterBank.GetRequester(PPERequester_ShockHitReaction).Start(m_EffectParam);

            // Test with timers
            // PPERequesterBank orangeEffect = new PPERequesterBank.GetRequester(PPERequester_GlassesSportOrange);
            PL_hallucinationTimer_Start.Run(2, this, "Start", null, true);
            PL_hallucinationTimer_Stop.Run(5, this, "Stop", null, true);
        }
    }

    void Start() {
        Print("Start method is run.");
        PPERequesterBank.GetRequester(REQ_HALLUCTNATIONCOLOR).Start();
    }

    void Stop() {
        Print("Stop method is run.");
        PPERequesterBank.GetRequester(REQ_HALLUCTNATIONCOLOR).Stop();
    }

    void PL_DespawnHallucinationsEffect()
    {
        if (GetGame().IsClient())
        {
            Print("Despawn hallucinations effect.");
            PPERequesterBank.GetRequester(PPERequester_ShockHitReaction).Stop();
        }
    }
}