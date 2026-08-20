# inc_user_fatigue

`_ZN13EventClassify15CEventScriptMng16inc_user_fatigueEP5CUserj`

`EventClassify::CEventScriptMng::inc_user_fatigue(CUser*, unsigned int)`

| 类 | 地址 |
|---|---|
| `EventClassify::CEventScriptMng` | `0x0810c152` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810c152  _ZN13EventClassify15CEventScriptMng16inc_user_fatigueEP5CUserj
#           EventClassify::CEventScriptMng::inc_user_fatigue(CUser*, unsigned int)
# range [0x0810c152, 0x0810c1e9]
0810c152 +0x00:  push   %ebp
0810c153 +0x01:  mov    %esp,%ebp
0810c155 +0x03:  sub    $0x28,%esp
0810c158 +0x06:  movl   $0x199,0x4(%esp)
0810c160 +0x0e:  mov    0x8(%ebp),%eax
0810c163 +0x11:  mov    %eax,(%esp)
0810c166 +0x14:  call   0810ba36 <_ZN13EventClassify15CEventScriptMng11is_eventingEi>  ; EventClassify::CEventScriptMng::is_eventing(int)
0810c16b +0x19:  xor    $0x1,%eax
0810c16e +0x1c:  test   %al,%al
0810c170 +0x1e:  jne    0810c1e3 <+0x91>
0810c172 +0x20:  movl   $0x199,0x4(%esp)
0810c17a +0x28:  mov    0x8(%ebp),%eax
0810c17d +0x2b:  mov    %eax,(%esp)
0810c180 +0x2e:  call   0810b96a <_ZN13EventClassify15CEventScriptMng16get_event_entityEi>  ; EventClassify::CEventScriptMng::get_event_entity(int)
0810c185 +0x33:  mov    %eax,-0xc(%ebp)
0810c188 +0x36:  cmpl   $0x0,-0xc(%ebp)
0810c18c +0x3a:  je     0810c1e6 <+0x94>
0810c18e +0x3c:  mov    -0xc(%ebp),%eax
0810c191 +0x3f:  mov    %eax,(%esp)
0810c194 +0x42:  call   08110edc <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x3ee>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x3ee
0810c199 +0x47:  movzbl %al,%eax
0810c19c +0x4a:  test   %eax,%eax
0810c19e +0x4c:  je     0810c1a7 <+0x55>
0810c1a0 +0x4e:  cmp    $0x1,%eax
0810c1a3 +0x51:  je     0810c1bb <+0x69>
0810c1a5 +0x53:  jmp    0810c1e7 <+0x95>
0810c1a7 +0x55:  mov    0x10(%ebp),%eax
0810c1aa +0x58:  mov    %eax,0x4(%esp)
0810c1ae +0x5c:  mov    0xc(%ebp),%eax
0810c1b1 +0x5f:  mov    %eax,(%esp)
0810c1b4 +0x62:  call   08110e1e <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x330>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x330
0810c1b9 +0x67:  jmp    0810c1e7 <+0x95>
0810c1bb +0x69:  mov    0xc(%ebp),%eax
0810c1be +0x6c:  mov    %eax,(%esp)
0810c1c1 +0x6f:  call   08110dc2 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x2d4>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x2d4
0810c1c6 +0x74:  test   %eax,%eax
0810c1c8 +0x76:  setne  %al
0810c1cb +0x79:  test   %al,%al
0810c1cd +0x7b:  je     0810c1e7 <+0x95>
0810c1cf +0x7d:  mov    0x10(%ebp),%eax
0810c1d2 +0x80:  mov    %eax,0x4(%esp)
0810c1d6 +0x84:  mov    0xc(%ebp),%eax
0810c1d9 +0x87:  mov    %eax,(%esp)
0810c1dc +0x8a:  call   08110e1e <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x330>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x330
0810c1e1 +0x8f:  jmp    0810c1e7 <+0x95>
0810c1e3 +0x91:  nop
0810c1e4 +0x92:  jmp    0810c1e7 <+0x95>
0810c1e6 +0x94:  nop
0810c1e7 +0x95:  leave
0810c1e8 +0x96:  ret
0810c1e9 +0x97:  nop
```

## 反编译 C

```c
// EventClassify::CEventScriptMng::inc_user_fatigue @ 0x810c152

/* EventClassify::CEventScriptMng::inc_user_fatigue(CUser*, unsigned int) */

void __thiscall
EventClassify::CEventScriptMng::inc_user_fatigue(CEventScriptMng *this,CUser *param_1,uint param_2)

{
  char cVar1;
  CFatigueQuantity *this_00;
  int iVar2;
  
  cVar1 = is_eventing(this,0x199);
  if ((cVar1 == '\x01') &&
     (this_00 = (CFatigueQuantity *)get_event_entity((int)this), this_00 != (CFatigueQuantity *)0x0)
     ) {
    cVar1 = CFatigueQuantity::get_user_type(this_00);
    if (cVar1 == '\0') {
      CUser::IncCurCharacUsedFatigueQuantity(param_1,param_2);
    }
    else if ((cVar1 == '\x01') && (iVar2 = CUser::GetPCRoomNo(param_1), iVar2 != 0)) {
      CUser::IncCurCharacUsedFatigueQuantity(param_1,param_2);
    }
  }
  return;
}
```
