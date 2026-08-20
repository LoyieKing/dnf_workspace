# CreatureItemDel

`_ZN15cUserHistoryLog15CreatureItemDelE10INVEN_TYPEiiii14eItemDelReason`

`cUserHistoryLog::CreatureItemDel(INVEN_TYPE, int, int, int, int, eItemDelReason)`

| 类 | 地址 |
|---|---|
| `cUserHistoryLog` | `0x08684f40` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08684f40  _ZN15cUserHistoryLog15CreatureItemDelE10INVEN_TYPEiiii14eItemDelReason
#           cUserHistoryLog::CreatureItemDel(INVEN_TYPE, int, int, int, int, eItemDelReason)
# range [0x08684f40, 0x0868503d]
08684f40 +0x00:  push   %ebp
08684f41 +0x01:  mov    %esp,%ebp
08684f43 +0x03:  push   %ebx
08684f44 +0x04:  sub    $0x64,%esp
08684f47 +0x07:  cmpl   $0x5,0x1c(%ebp)
08684f4b +0x0b:  jne    08684feb <+0xab>
08684f51 +0x11:  cmpl   $0x14,0x20(%ebp)
08684f55 +0x15:  je     08684f5d <+0x1d>
08684f57 +0x17:  cmpl   $0x15,0x20(%ebp)
08684f5b +0x1b:  jne    08684fb8 <+0x78>
08684f5d +0x1d:  mov    0x8(%ebp),%eax
08684f60 +0x20:  add    $0x22,%eax
08684f63 +0x23:  movzbl (%eax),%eax
08684f66 +0x26:  test   %al,%al
08684f68 +0x28:  je     08685037 <+0xf7>
08684f6e +0x2e:  mov    0x8(%ebp),%eax
08684f71 +0x31:  lea    0x4(%eax),%ebx
08684f74 +0x34:  mov    0x8(%ebp),%eax
08684f77 +0x37:  lea    0x22(%eax),%ecx
08684f7a +0x3a:  mov    0x20(%ebp),%edx
08684f7d +0x3d:  mov    0x8(%ebp),%eax
08684f80 +0x40:  mov    (%eax),%eax
08684f82 +0x42:  mov    %ebx,0x1c(%esp)
08684f86 +0x46:  mov    %ecx,0x18(%esp)
08684f8a +0x4a:  mov    %edx,0x14(%esp)
08684f8e +0x4e:  mov    0x18(%ebp),%edx
08684f91 +0x51:  mov    %edx,0x10(%esp)
08684f95 +0x55:  mov    0x14(%ebp),%edx
08684f98 +0x58:  mov    %edx,0xc(%esp)
08684f9c +0x5c:  mov    0x10(%ebp),%edx
08684f9f +0x5f:  mov    %edx,0x8(%esp)
08684fa3 +0x63:  movl   $"CTItem-,%d,%d,%d,%d,\"%s\",\"%s\"",0x4(%esp)
08684fab +0x6b:  mov    %eax,(%esp)
08684fae +0x6e:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
08684fb3 +0x73:  jmp    08685038 <+0xf8>
08684fb8 +0x78:  mov    0x20(%ebp),%edx
08684fbb +0x7b:  mov    0x8(%ebp),%eax
08684fbe +0x7e:  mov    (%eax),%eax
08684fc0 +0x80:  mov    %edx,0x14(%esp)
08684fc4 +0x84:  mov    0x18(%ebp),%edx
08684fc7 +0x87:  mov    %edx,0x10(%esp)
08684fcb +0x8b:  mov    0x14(%ebp),%edx
08684fce +0x8e:  mov    %edx,0xc(%esp)
08684fd2 +0x92:  mov    0x10(%ebp),%edx
08684fd5 +0x95:  mov    %edx,0x8(%esp)
08684fd9 +0x99:  movl   $"CTItem-,%d,%d,%d,%d",0x4(%esp)
08684fe1 +0xa1:  mov    %eax,(%esp)
08684fe4 +0xa4:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
08684fe9 +0xa9:  jmp    08685038 <+0xf8>
08684feb +0xab:  lea    -0x45(%ebp),%eax
08684fee +0xae:  mov    %eax,(%esp)
08684ff1 +0xb1:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
08684ff6 +0xb6:  lea    -0x45(%ebp),%eax
08684ff9 +0xb9:  mov    %eax,(%esp)
08684ffc +0xbc:  call   080cb7d8 <_GLOBAL__I__ZN10BingoEventC2Ev+0x625>  ; global constructors keyed to BingoEvent::BingoEvent()+0x625
08685001 +0xc1:  mov    0x10(%ebp),%eax
08685004 +0xc4:  mov    %eax,-0x43(%ebp)
08685007 +0xc7:  mov    0x20(%ebp),%eax
0868500a +0xca:  mov    %eax,0x14(%esp)
0868500e +0xce:  lea    -0x45(%ebp),%eax
08685011 +0xd1:  mov    %eax,0x10(%esp)
08685015 +0xd5:  mov    0x18(%ebp),%eax
08685018 +0xd8:  mov    %eax,0xc(%esp)
0868501c +0xdc:  mov    0x14(%ebp),%eax
0868501f +0xdf:  mov    %eax,0x8(%esp)
08685023 +0xe3:  mov    0xc(%ebp),%eax
08685026 +0xe6:  mov    %eax,0x4(%esp)
0868502a +0xea:  mov    0x8(%ebp),%eax
0868502d +0xed:  mov    %eax,(%esp)
08685030 +0xf0:  call   0868340a <_ZN15cUserHistoryLog7ItemDelE10INVEN_TYPEiiRK10Inven_Item14eItemDelReason>  ; cUserHistoryLog::ItemDel(INVEN_TYPE, int, int, Inven_Item const&, eItemDelReason)
08685035 +0xf5:  jmp    08685038 <+0xf8>
08685037 +0xf7:  nop
08685038 +0xf8:  add    $0x64,%esp
0868503b +0xfb:  pop    %ebx
0868503c +0xfc:  pop    %ebp
0868503d +0xfd:  ret
```

## 反编译 C

```c
// cUserHistoryLog::CreatureItemDel @ 0x8684f40

/* cUserHistoryLog::CreatureItemDel(INVEN_TYPE, int, int, int, int, eItemDelReason) */

void __thiscall
cUserHistoryLog::CreatureItemDel
          (cUserHistoryLog *this,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,int param_6,int param_7)

{
  Inven_Item local_49 [2];
  undefined4 local_47;
  
  if (param_6 == 5) {
    if ((param_7 == 0x14) || (param_7 == 0x15)) {
      if (this[0x22] != (cUserHistoryLog)0x0) {
        CUser::LogHistory(*(CUser **)this,"CTItem-,%d,%d,%d,%d,\"%s\",\"%s\"",param_3,param_4,
                          param_5,param_7,this + 0x22,this + 4);
      }
    }
    else {
      CUser::LogHistory(*(CUser **)this,"CTItem-,%d,%d,%d,%d",param_3,param_4,param_5,param_7);
    }
  }
  else {
    Inven_Item::Inven_Item(local_49);
    Inven_Item::reset(local_49);
    local_47 = param_3;
    ItemDel(this,param_2,param_4,param_5,local_49,param_7);
  }
  return;
}
```
