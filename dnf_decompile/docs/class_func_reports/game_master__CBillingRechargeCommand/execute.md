# execute

`_ZN11game_master23CBillingRechargeCommand7executeEv`

`game_master::CBillingRechargeCommand::execute()`

| 类 | 地址 |
|---|---|
| `game_master::CBillingRechargeCommand` | `0x084b3ad4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084b3ad4  _ZN11game_master23CBillingRechargeCommand7executeEv
#           game_master::CBillingRechargeCommand::execute()
# range [0x084b3ad4, 0x084b3bdb]
084b3ad4 +0x000:  push   %ebp
084b3ad5 +0x001:  mov    %esp,%ebp
084b3ad7 +0x003:  sub    $0x48,%esp
084b3ada +0x006:  mov    0x8(%ebp),%eax
084b3add +0x009:  mov    %eax,(%esp)
084b3ae0 +0x00c:  call   084b3fba <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x6d>  ; global constructors keyed to game_master::CMacro::Reset()+0x6d
084b3ae5 +0x011:  mov    %eax,-0xc(%ebp)
084b3ae8 +0x014:  mov    0x8(%ebp),%eax
084b3aeb +0x017:  add    $0x8,%eax
084b3aee +0x01a:  movl   $"cera",0x4(%esp)
084b3af6 +0x022:  mov    %eax,(%esp)
084b3af9 +0x025:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
084b3afe +0x02a:  test   %al,%al
084b3b00 +0x02c:  je     084b3b63 <+0x8f>
084b3b02 +0x02e:  mov    &_ZN10GlobalData12s_pIPGHelperE,%eax
084b3b07 +0x033:  mov    (%eax),%eax
084b3b09 +0x035:  add    $0x4,%eax
084b3b0c +0x038:  mov    (%eax),%ecx
084b3b0e +0x03a:  mov    0x8(%ebp),%eax
084b3b11 +0x03d:  mov    0xc(%eax),%edx
084b3b14 +0x040:  mov    &_ZN10GlobalData12s_pIPGHelperE,%eax
084b3b19 +0x045:  movl   $0x0,0x24(%esp)
084b3b21 +0x04d:  movl   $0x0,0x20(%esp)
084b3b29 +0x055:  movl   $0x0,0x1c(%esp)
084b3b31 +0x05d:  movl   $"GM",0x18(%esp)
084b3b39 +0x065:  movl   $"",0x14(%esp)
084b3b41 +0x06d:  movl   $"",0x10(%esp)
084b3b49 +0x075:  mov    %edx,0xc(%esp)
084b3b4d +0x079:  movl   $0x5,0x8(%esp)
084b3b55 +0x081:  mov    -0xc(%ebp),%edx
084b3b58 +0x084:  mov    %edx,0x4(%esp)
084b3b5c +0x088:  mov    %eax,(%esp)
084b3b5f +0x08b:  call   *%ecx
084b3b61 +0x08d:  jmp    084b3bbc <+0xe8>
084b3b63 +0x08f:  mov    0x8(%ebp),%eax
084b3b66 +0x092:  add    $0x8,%eax
084b3b69 +0x095:  movl   $"point",0x4(%esp)
084b3b71 +0x09d:  mov    %eax,(%esp)
084b3b74 +0x0a0:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
084b3b79 +0x0a5:  test   %al,%al
084b3b7b +0x0a7:  je     084b3bbc <+0xe8>
084b3b7d +0x0a9:  mov    &_ZN10GlobalData12s_pIPGHelperE,%eax
084b3b82 +0x0ae:  mov    (%eax),%eax
084b3b84 +0x0b0:  add    $0xc,%eax
084b3b87 +0x0b3:  mov    (%eax),%ecx
084b3b89 +0x0b5:  mov    0x8(%ebp),%eax
084b3b8c +0x0b8:  mov    0xc(%eax),%edx
084b3b8f +0x0bb:  mov    &_ZN10GlobalData12s_pIPGHelperE,%eax
084b3b94 +0x0c0:  movl   $0x0,0x14(%esp)
084b3b9c +0x0c8:  movl   $0x0,0x10(%esp)
084b3ba4 +0x0d0:  movl   $0x4,0xc(%esp)
084b3bac +0x0d8:  mov    %edx,0x8(%esp)
084b3bb0 +0x0dc:  mov    -0xc(%ebp),%edx
084b3bb3 +0x0df:  mov    %edx,0x4(%esp)
084b3bb7 +0x0e3:  mov    %eax,(%esp)
084b3bba +0x0e6:  call   *%ecx
084b3bbc +0x0e8:  mov    &_ZN10GlobalData12s_pIPGHelperE,%eax
084b3bc1 +0x0ed:  mov    (%eax),%eax
084b3bc3 +0x0ef:  add    $0x2c,%eax
084b3bc6 +0x0f2:  mov    (%eax),%ecx
084b3bc8 +0x0f4:  mov    &_ZN10GlobalData12s_pIPGHelperE,%eax
084b3bcd +0x0f9:  mov    -0xc(%ebp),%edx
084b3bd0 +0x0fc:  mov    %edx,0x4(%esp)
084b3bd4 +0x100:  mov    %eax,(%esp)
084b3bd7 +0x103:  call   *%ecx
084b3bd9 +0x105:  leave
084b3bda +0x106:  ret
084b3bdb +0x107:  nop
```

## 反编译 C

```c
// game_master::CBillingRechargeCommand::execute @ 0x84b3ad4

/* game_master::CBillingRechargeCommand::execute() */

void __thiscall game_master::CBillingRechargeCommand::execute(CBillingRechargeCommand *this)

{
  bool bVar1;
  undefined4 uVar2;
  
  uVar2 = CCommand::GetUser((CCommand *)this);
  bVar1 = std::operator==((string *)(this + 8),"cera");
  if (bVar1) {
    (**(code **)(*GlobalData::s_pIPGHelper + 4))
              (GlobalData::s_pIPGHelper,uVar2,5,*(undefined4 *)(this + 0xc),&DAT_08c7fa20,
               &DAT_08c7fa20,&DAT_08c80465,0,0,0);
  }
  else {
    bVar1 = std::operator==((string *)(this + 8),"point");
    if (bVar1) {
      (**(code **)(*GlobalData::s_pIPGHelper + 0xc))
                (GlobalData::s_pIPGHelper,uVar2,*(undefined4 *)(this + 0xc),4,0,0);
    }
  }
  (**(code **)(*GlobalData::s_pIPGHelper + 0x2c))(GlobalData::s_pIPGHelper,uVar2);
  return;
}
```
