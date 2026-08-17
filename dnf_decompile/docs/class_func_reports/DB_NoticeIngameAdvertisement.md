# DB_NoticeIngameAdvertisement

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 0844710e DB_NoticeIngameAdvertisement::dispatch  [0x0844710e-0x8447161] ===
 844710e:	55                   	push   %ebp
 844710f:	89 e5                	mov    %esp,%ebp
 8447111:	83 ec 28             	sub    $0x28,%esp
 8447114:	e8 d0 58 cb ff       	call   80fc9e9 <_Z23InGameADManagerInstancev>
 8447119:	89 04 24             	mov    %eax,(%esp)
 844711c:	e8 3d 68 cb ff       	call   80fd95e <_ZN27CInGameAdvertisementManager18ReloadADExposeInfoEv>
 8447121:	83 f0 01             	xor    $0x1,%eax
 8447124:	84 c0                	test   %al,%al
 8447126:	74 33                	je     844715b <_ZN28DB_NoticeIngameAdvertisement8dispatchEiiP6Stream+0x4d>
 8447128:	c7 44 24 10 0c 80 c5 	movl   $0x8c5800c,0x10(%esp)
 844712f:	08 
 8447130:	c7 44 24 0c 7f b1 00 	movl   $0xb17f,0xc(%esp)
 8447137:	00 
 8447138:	c7 44 24 08 40 b2 c5 	movl   $0x8c5b240,0x8(%esp)
 844713f:	08 
 8447140:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 8447147:	08 
 8447148:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 844714f:	e8 b6 ca 68 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8447154:	b8 00 00 00 00       	mov    $0x0,%eax
 8447159:	eb 05                	jmp    8447160 <_ZN28DB_NoticeIngameAdvertisement8dispatchEiiP6Stream+0x52>
 844715b:	b8 01 00 00 00       	mov    $0x1,%eax
 8447160:	c9                   	leave
 8447161:	c3                   	ret

```

```c
// DB_NoticeIngameAdvertisement::dispatch @ 0x844710e

/* DB_NoticeIngameAdvertisement::dispatch(int, int, Stream*) */

bool DB_NoticeIngameAdvertisement::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  CInGameAdvertisementManager *this;
  
  this = (CInGameAdvertisementManager *)InGameADManagerInstance();
  cVar1 = CInGameAdvertisementManager::ReloadADExposeInfo(this);
  if (cVar1 != '\x01') {
    LogManager::logFormat
              (1,"DBThread.cpp",
               "virtual bool DB_NoticeIngameAdvertisement::dispatch(int, int, Stream*)",0xb17f,
               "Fail Load In Game Advertisement Expose Info");
  }
  return cVar1 == '\x01';
}

```

