# Inter_LoadAutoMarketConditionsControl

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084d891c Inter_LoadAutoMarketConditionsControl::dispatch_sig  [0x084d891c-0x84d894b] ===
 84d891c:	55                   	push   %ebp
 84d891d:	89 e5                	mov    %esp,%ebp
 84d891f:	83 ec 28             	sub    $0x28,%esp
 84d8922:	8b 45 10             	mov    0x10(%ebp),%eax
 84d8925:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84d8928:	e8 6e 38 bf ff       	call   80cc19b <_Z14G_CDataManagerv>
 84d892d:	89 04 24             	mov    %eax,(%esp)
 84d8930:	e8 c7 09 01 00       	call   84e92fc <_ZN12CDataManager30GetAutoMarketContitionsControlEv>
 84d8935:	8b 55 f4             	mov    -0xc(%ebp),%edx
 84d8938:	89 54 24 04          	mov    %edx,0x4(%esp)
 84d893c:	89 04 24             	mov    %eax,(%esp)
 84d893f:	e8 40 fd e1 ff       	call   82f8684 <_ZN28CAutoMarketConditionsControl12LoadDatabaseEP34SIG_AUTO_MARKET_CONDITIONS_CONTROL>
 84d8944:	b8 00 00 00 00       	mov    $0x0,%eax
 84d8949:	c9                   	leave
 84d894a:	c3                   	ret
 84d894b:	90                   	nop

```

```c
// Inter_LoadAutoMarketConditionsControl::dispatch_sig @ 0x84d891c

/* Inter_LoadAutoMarketConditionsControl::dispatch_sig(CUser*, char*, int) */

undefined4
Inter_LoadAutoMarketConditionsControl::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  CDataManager *this;
  CAutoMarketConditionsControl *this_00;
  
  this = (CDataManager *)G_CDataManager();
  this_00 = (CAutoMarketConditionsControl *)CDataManager::GetAutoMarketContitionsControl(this);
  CAutoMarketConditionsControl::LoadDatabase(this_00,(SIG_AUTO_MARKET_CONDITIONS_CONTROL *)param_3);
  return 0;
}

```

