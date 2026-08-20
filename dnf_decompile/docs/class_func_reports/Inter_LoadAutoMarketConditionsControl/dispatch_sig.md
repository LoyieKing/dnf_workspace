# dispatch_sig

`_ZN37Inter_LoadAutoMarketConditionsControl12dispatch_sigEP5CUserPci`

`Inter_LoadAutoMarketConditionsControl::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_LoadAutoMarketConditionsControl` | `0x084d891c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084d891c  _ZN37Inter_LoadAutoMarketConditionsControl12dispatch_sigEP5CUserPci
#           Inter_LoadAutoMarketConditionsControl::dispatch_sig(CUser*, char*, int)
# range [0x084d891c, 0x084d894b]
084d891c +0x00:  push   %ebp
084d891d +0x01:  mov    %esp,%ebp
084d891f +0x03:  sub    $0x28,%esp
084d8922 +0x06:  mov    0x10(%ebp),%eax
084d8925 +0x09:  mov    %eax,-0xc(%ebp)
084d8928 +0x0c:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084d892d +0x11:  mov    %eax,(%esp)
084d8930 +0x14:  call   084e92fc <_GLOBAL__I__Z7getUserj+0x2ae>  ; global constructors keyed to getUser(unsigned int)+0x2ae
084d8935 +0x19:  mov    -0xc(%ebp),%edx
084d8938 +0x1c:  mov    %edx,0x4(%esp)
084d893c +0x20:  mov    %eax,(%esp)
084d893f +0x23:  call   082f8684 <_ZN28CAutoMarketConditionsControl12LoadDatabaseEP34SIG_AUTO_MARKET_CONDITIONS_CONTROL>  ; CAutoMarketConditionsControl::LoadDatabase(SIG_AUTO_MARKET_CONDITIONS_CONTROL*)
084d8944 +0x28:  mov    $0x0,%eax
084d8949 +0x2d:  leave
084d894a +0x2e:  ret
084d894b +0x2f:  nop
```

## 反编译 C

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
