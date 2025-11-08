#pragma once

// SHANKS ENGINE  (3.8.1) SDKGen by Telegram @O_N_E_B_I_E_C_E 
//Ch @onebiecerr 
// Generate on Wed May  7 13:15:35 2025
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class PandoraVideoPlayer.BP_PixVideoLibrary
// 0x0000 (0x0020 - 0x0020)
class UBP_PixVideoLibrary : public UBlueprintFunctionLibrary
{
public:

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PandoraVideoPlayer.BP_PixVideoLibrary");
        return pStaticClass;
    }


	static class UUserWidget* CreatePlayerWidget(const struct FString& Name);
};


// Class PandoraVideoPlayer.PVideoImage
// 0x0020 (0x0230 - 0x0210)
class UPVideoImage : public UImage
{
public:
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0210(0x001C) MISSED OFFSET
	class UPVideoPlayer*                               m_pPlayer;                                                // 0x022C(0x0004) (ZeroConstructor, IsPlainOldData)

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PandoraVideoPlayer.PVideoImage");
        return pStaticClass;
    }


	void VideoPlayerEvent__DelegateSignature(int EventCode, int nParam1, int nParam2, const struct FString& strMsg);
	void UseFileDelegate(bool bEnable);
	void Update();
	void SetVolume(int nVolume);
	void SetVideoAlpha(float FAlpha);
	void SetStopAsyn(int stopAsyn);
	void SetRate(float nRate);
	void SetOnlyPlayType(int Type);
	void SetNextVideo(const struct FString& strUrl, bool bLoop);
	void SetNeedVideoTexture(bool needVideoTexture);
	void SetNeedPlayAudio(bool needPlayAudio);
	int SetDecryptionKey(const struct FString& decryptionKey);
	void SetDataUpdateCallback(const TScriptInterface<class UPVideoPlayerInterface>& dataUpdateInterface);
	void SetAutoPlay(bool doAutoPlay);
	void SeekMs(int millisec);
	void SeekAndPause(int nMilliSec);
	void Seek(int nSecond);
	void Resume();
	int PlayWithFd(int nFd, bool bLoop);
	int PlayOnceAndLoopBetween(const struct FString& strUrl, int nStartMs, int nEndMs);
	int Play(const struct FString& strUrl, bool bLoop);
	void Pause();
	bool IsTextureUpdated();
	bool IsPlaying();
	bool IsPause();
	bool IsAlphaVideo();
	int GetYUVFormat();
	void GetVideoTime(float* fCurTime, float* fTotalTime);
	class UTexture2D* GetVideoTexture(int nIdx);
	float GetVideoAlpha();
	struct FLinearColor GetRgbParameter();
	void GetResolution(int* nWidth, int* nHeight);
	int GetPlayStatus();
	int GetMediaType();
	int GetDuration();
	int GetCurrentPosition();
	struct FLinearColor GetAlphaParameter();
	void EnableCacheResource(bool bEnable, const struct FString& cachePath);
	void Close();
};


// Class PandoraVideoPlayer.PVideoPlayerInterface
// 0x0000 (0x0020 - 0x0020)
class UPVideoPlayerInterface : public UInterface
{
public:

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PandoraVideoPlayer.PVideoPlayerInterface");
        return pStaticClass;
    }


	bool OnAudioDataUpdateCallback(TArray<unsigned char> AudioData, int Size, int Samples, int Channels, int sample_rate, float clock);
};


// Class PandoraVideoPlayer.PVideoPlayer
// 0x00F4 (0x0110 - 0x001C)
class UPVideoPlayer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    MediaPlayerEventDelegate;                                 // 0x0020(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0xBC];                                      // 0x002C(0x00BC) MISSED OFFSET
	TArray<class UTexture2D*>                          m_pTextures;                                              // 0x00E8(0x000C) (ZeroConstructor)
	unsigned char                                      UnknownData02[0x1C];                                      // 0x00F4(0x001C) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PandoraVideoPlayer.PVideoPlayer");
        return pStaticClass;
    }


	void UseFileDelegate(bool bEnable);
	void Update();
	void SetVolume(int nVolume);
	void SetVideoAlpha(float FAlpha);
	static void SetStopAsyn(int stopAsyn);
	void SetRate(float nRate);
	void SetOnlyPlayType(int Type);
	void SetNextVideo(const struct FString& strUrl, bool bLoop);
	void SetNeedVideoTexture(bool bNeedVideoTexture);
	void SetNeedPlayAudio(bool bNeedPlayAudio);
	static void SetHardwareDecodec(bool bHareware);
	int SetDecryptionKey(const struct FString& decryptionKey);
	void SetDataUpdateCallback(const TScriptInterface<class UPVideoPlayerInterface>& dataUpdateInterface);
	static void SetCachePacketSize(int nSizeMb);
	void SetAutoPlay(bool bAutoPlay);
	void SeekMs(int millisec);
	void SeekAndPause(int nMilliSec);
	void Seek(int nSecond);
	void Resume();
	int PlayOnceAndLoopBetween(const struct FString& strUrl, int nStartMs, int nEndMs);
	int Play(const struct FString& strUrl, bool bLoop);
	void Pause();
	void MediaPlayerEvent__DelegateSignature(int EventCode, int nParam1, int nParam2, const struct FString& strMsg);
	bool IsTextureUpdated();
	bool IsPlaying();
	bool IsPause();
	bool IsAlphaVideo();
	int GetYUVFormat();
	void GetVideoTime(float* fCurTime, float* fTotalTime);
	class UTexture2D* GetVideoTexture(int nIdx);
	float GetVideoAlpha();
	struct FLinearColor GetRgbParameter();
	void GetResolution(int* nWidth, int* nHeight);
	float GetRate();
	int GetPlayStatus();
	int GetMediaType();
	int GetDuration();
	int GetCurrentPosition();
	struct FLinearColor GetAlphaParameter();
	void EnableCacheResource(bool bEnable, const struct FString& cachePath);
	void Close();
	static void ClearCacheResource(const struct FString& cachePath);
	void BlueTick();
	void BeginPlay();
};


// Class PandoraVideoPlayer.VideoPlayerWidget
// 0x0010 (0x0218 - 0x0208)
class UVideoPlayerWidget : public UUserWidget
{
public:
	struct FScriptMulticastDelegate                    OnPlayerEventDelegate;                                    // 0x0208(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0214(0x0004) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PandoraVideoPlayer.VideoPlayerWidget");
        return pStaticClass;
    }


	void VideoPlayerEvent__DelegateSignature(int nEvent, int nArg1, int nArg2, const struct FString& sMsg);
	void UseFileDelegate(bool bEnable);
	void SetVolume(int nVolume);
	void SetVideoAlpha(float FAlpha);
	void SetStopAsyn(int stopAsyn);
	void SetRate(float nRate);
	void SetOnlyPlayType(int Type);
	void SetNextVideo(const struct FString& strUrl, bool bLoop);
	void SetNeedVideoTexture(bool needVideoTexture);
	void SetNeedPlayAudio(bool needPlayAudio);
	void SetHardwareDecodec(bool bHardWare);
	int SetDecryptionKey(const struct FString& decryptionKey);
	void SetDataUpdateCallback(const TScriptInterface<class UPVideoPlayerInterface>& dataUpdateInterface);
	void SetAutoPlay(bool doAutoPlay);
	void SeekMs(int nMilliSec);
	void SeekAndPause(int nMilliSec);
	void Seek(int nSecond);
	void Resume();
	int PlayWithFd(int nFd, bool bLoop);
	int PlayOnceAndLoopBetween(const struct FString& strUrl, int nStartMs, int nEndMs);
	int Play1(const struct FString& strUrl, bool bLoop);
	void Pause();
	void OnPlayerEvent(int EventCode, int nParam1, int nParam2, const struct FString& strMsg);
	float GetVideoAlpha();
	int GetPlayStatus1();
	int GetDuration1();
	int GetCurrentPosition1();
	void EnableCacheResource(bool bEnable, const struct FString& Path);
	void Close();
	void ClearCacheResource(const struct FString& Path);
};


}

