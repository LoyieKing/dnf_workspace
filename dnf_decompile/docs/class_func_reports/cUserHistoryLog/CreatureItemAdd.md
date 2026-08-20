# CreatureItemAdd

`_ZN15cUserHistoryLog15CreatureItemAddE10INVEN_TYPEiiii14eItemAddReason`

`cUserHistoryLog::CreatureItemAdd(INVEN_TYPE, int, int, int, int, eItemAddReason)`

| 类 | 地址 |
|---|---|
| `cUserHistoryLog` | `0x08684e3c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08684e3c  _ZN15cUserHistoryLog15CreatureItemAddE10INVEN_TYPEiiii14eItemAddReason
#           cUserHistoryLog::CreatureItemAdd(INVEN_TYPE, int, int, int, int, eItemAddReason)
# range [0x08684e3c, 0x08684f3f]
08684e3c +0x000:  push   %ebp
08684e3d +0x001:  mov    %esp,%ebp
08684e3f +0x003:  push   %ebx
08684e40 +0x004:  sub    $0x64,%esp
08684e43 +0x007:  cmpl   $0x5,0x1c(%ebp)
08684e47 +0x00b:  jne    08684eed <+0xb1>
08684e4d +0x011:  cmpl   $0x1a,0x20(%ebp)
08684e51 +0x015:  je     08684e5f <+0x23>
08684e53 +0x017:  cmpl   $0x1c,0x20(%ebp)
08684e57 +0x01b:  je     08684e5f <+0x23>
08684e59 +0x01d:  cmpl   $0x1d,0x20(%ebp)
08684e5d +0x021:  jne    08684eba <+0x7e>
08684e5f +0x023:  mov    0x8(%ebp),%eax
08684e62 +0x026:  add    $0x22,%eax
08684e65 +0x029:  movzbl (%eax),%eax
08684e68 +0x02c:  test   %al,%al
08684e6a +0x02e:  je     08684f39 <+0xfd>
08684e70 +0x034:  mov    0x8(%ebp),%eax
08684e73 +0x037:  lea    0x4(%eax),%ebx
08684e76 +0x03a:  mov    0x8(%ebp),%eax
08684e79 +0x03d:  lea    0x22(%eax),%ecx
08684e7c +0x040:  mov    0x20(%ebp),%edx
08684e7f +0x043:  mov    0x8(%ebp),%eax
08684e82 +0x046:  mov    (%eax),%eax
08684e84 +0x048:  mov    %ebx,0x1c(%esp)
08684e88 +0x04c:  mov    %ecx,0x18(%esp)
08684e8c +0x050:  mov    %edx,0x14(%esp)
08684e90 +0x054:  mov    0x18(%ebp),%edx
08684e93 +0x057:  mov    %edx,0x10(%esp)
08684e97 +0x05b:  mov    0x14(%ebp),%edx
08684e9a +0x05e:  mov    %edx,0xc(%esp)
08684e9e +0x062:  mov    0x10(%ebp),%edx
08684ea1 +0x065:  mov    %edx,0x8(%esp)
08684ea5 +0x069:  movl   $"CTItem+,%d,%d,%d,%d,\"%s\",\"%s\")",0x4(%esp)
08684ead +0x071:  mov    %eax,(%esp)
08684eb0 +0x074:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
08684eb5 +0x079:  jmp    08684f3a <+0xfe>
08684eba +0x07e:  mov    0x20(%ebp),%edx
08684ebd +0x081:  mov    0x8(%ebp),%eax
08684ec0 +0x084:  mov    (%eax),%eax
08684ec2 +0x086:  mov    %edx,0x14(%esp)
08684ec6 +0x08a:  mov    0x18(%ebp),%edx
08684ec9 +0x08d:  mov    %edx,0x10(%esp)
08684ecd +0x091:  mov    0x14(%ebp),%edx
08684ed0 +0x094:  mov    %edx,0xc(%esp)
08684ed4 +0x098:  mov    0x10(%ebp),%edx
08684ed7 +0x09b:  mov    %edx,0x8(%esp)
08684edb +0x09f:  movl   $"CTItem+,%d,%d,%d,%d",0x4(%esp)
08684ee3 +0x0a7:  mov    %eax,(%esp)
08684ee6 +0x0aa:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
08684eeb +0x0af:  jmp    08684f3a <+0xfe>
08684eed +0x0b1:  lea    -0x45(%ebp),%eax
08684ef0 +0x0b4:  mov    %eax,(%esp)
08684ef3 +0x0b7:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
08684ef8 +0x0bc:  lea    -0x45(%ebp),%eax
08684efb +0x0bf:  mov    %eax,(%esp)
08684efe +0x0c2:  call   080cb7d8 <_GLOBAL__I__ZN10BingoEventC2Ev+0x625>  ; global constructors keyed to BingoEvent::BingoEvent()+0x625
08684f03 +0x0c7:  mov    0x10(%ebp),%eax
08684f06 +0x0ca:  mov    %eax,-0x43(%ebp)
08684f09 +0x0cd:  mov    0x20(%ebp),%eax
08684f0c +0x0d0:  mov    %eax,0x14(%esp)
08684f10 +0x0d4:  lea    -0x45(%ebp),%eax
08684f13 +0x0d7:  mov    %eax,0x10(%esp)
08684f17 +0x0db:  mov    0x18(%ebp),%eax
08684f1a +0x0de:  mov    %eax,0xc(%esp)
08684f1e +0x0e2:  mov    0x14(%ebp),%eax
08684f21 +0x0e5:  mov    %eax,0x8(%esp)
08684f25 +0x0e9:  mov    0xc(%ebp),%eax
08684f28 +0x0ec:  mov    %eax,0x4(%esp)
08684f2c +0x0f0:  mov    0x8(%ebp),%eax
08684f2f +0x0f3:  mov    %eax,(%esp)
08684f32 +0x0f6:  call   08682e84 <_ZN15cUserHistoryLog7ItemAddE10INVEN_TYPEiiRK10Inven_Item14eItemAddReason>  ; cUserHistoryLog::ItemAdd(INVEN_TYPE, int, int, Inven_Item const&, eItemAddReason)
08684f37 +0x0fb:  jmp    08684f3a <+0xfe>
08684f39 +0x0fd:  nop
08684f3a +0x0fe:  add    $0x64,%esp
08684f3d +0x101:  pop    %ebx
08684f3e +0x102:  pop    %ebp
08684f3f +0x103:  ret
```

## 反编译 C

```c
// cUserHistoryLog::CreatureItemAdd @ 0x8684e3c

/* cUserHistoryLog::CreatureItemAdd(INVEN_TYPE, int, int, int, int, eItemAddReason) */

void __thiscall
cUserHistoryLog::CreatureItemAdd
          (cUserHistoryLog *this,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,int param_6,int param_7)

{
  Inven_Item local_49 [2];
  undefined4 local_47;
  
  if (param_6 == 5) {
    if (((param_7 == 0x1a) || (param_7 == 0x1c)) || (param_7 == 0x1d)) {
      if (this[0x22] != (cUserHistoryLog)0x0) {
        CUser::LogHistory(*(CUser **)this,"CTItem+,%d,%d,%d,%d,\"%s\",\"%s\")",param_3,param_4,
                          param_5,param_7,this + 0x22,this + 4);
      }
    }
    else {
      CUser::LogHistory(*(CUser **)this,"CTItem+,%d,%d,%d,%d",param_3,param_4,param_5,param_7);
    }
  }
  else {
    Inven_Item::Inven_Item(local_49);
    Inven_Item::reset(local_49);
    local_47 = param_3;
    ItemAdd(this,param_2,param_4,param_5,local_49,param_7);
  }
  return;
}
```
