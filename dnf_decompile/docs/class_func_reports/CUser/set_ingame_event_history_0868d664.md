# set_ingame_event_history

`_ZN5CUser24set_ingame_event_historyEP24SIG_INGAME_EVENT_HISTORY`

`CUser::set_ingame_event_history(SIG_INGAME_EVENT_HISTORY*)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0868d664` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868d664  _ZN5CUser24set_ingame_event_historyEP24SIG_INGAME_EVENT_HISTORY
#           CUser::set_ingame_event_history(SIG_INGAME_EVENT_HISTORY*)
# range [0x0868d664, 0x0868d72b]
0868d664 +0x00:  push   %ebp
0868d665 +0x01:  mov    %esp,%ebp
0868d667 +0x03:  push   %ebx
0868d668 +0x04:  sub    $0x24,%esp
0868d66b +0x07:  cmpl   $0x0,0xc(%ebp)
0868d66f +0x0b:  je     0868d725 <+0xc1>
0868d675 +0x11:  movl   $0x0,-0xc(%ebp)
0868d67c +0x18:  jmp    0868d714 <+0xb0>
0868d681 +0x1d:  mov    -0xc(%ebp),%edx
0868d684 +0x20:  mov    %edx,%eax
0868d686 +0x22:  add    %eax,%eax
0868d688 +0x24:  add    %edx,%eax
0868d68a +0x26:  shl    $0x2,%eax
0868d68d +0x29:  add    0xc(%ebp),%eax
0868d690 +0x2c:  mov    (%eax),%eax
0868d692 +0x2e:  test   %eax,%eax
0868d694 +0x30:  je     0868d710 <+0xac>
0868d696 +0x32:  mov    -0xc(%ebp),%edx
0868d699 +0x35:  mov    %edx,%eax
0868d69b +0x37:  add    %eax,%eax
0868d69d +0x39:  add    %edx,%eax
0868d69f +0x3b:  shl    $0x2,%eax
0868d6a2 +0x3e:  add    0xc(%ebp),%eax
0868d6a5 +0x41:  mov    (%eax),%ebx
0868d6a7 +0x43:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0868d6ac +0x48:  mov    %eax,(%esp)
0868d6af +0x4b:  call   08110b62 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x74>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x74
0868d6b4 +0x50:  mov    %ebx,0x4(%esp)
0868d6b8 +0x54:  mov    %eax,(%esp)
0868d6bb +0x57:  call   0810c75c <_ZN13EventClassify15CEventScriptMng35is_current_ingame_event_record_typeEi>  ; EventClassify::CEventScriptMng::is_current_ingame_event_record_type(int)
0868d6c0 +0x5c:  test   %al,%al
0868d6c2 +0x5e:  je     0868d710 <+0xac>
0868d6c4 +0x60:  mov    -0xc(%ebp),%edx
0868d6c7 +0x63:  mov    %edx,%eax
0868d6c9 +0x65:  add    %eax,%eax
0868d6cb +0x67:  add    %edx,%eax
0868d6cd +0x69:  shl    $0x2,%eax
0868d6d0 +0x6c:  add    0xc(%ebp),%eax
0868d6d3 +0x6f:  mov    0x8(%eax),%ebx
0868d6d6 +0x72:  mov    -0xc(%ebp),%edx
0868d6d9 +0x75:  mov    %edx,%eax
0868d6db +0x77:  add    %eax,%eax
0868d6dd +0x79:  add    %edx,%eax
0868d6df +0x7b:  shl    $0x2,%eax
0868d6e2 +0x7e:  add    0xc(%ebp),%eax
0868d6e5 +0x81:  mov    0x4(%eax),%ecx
0868d6e8 +0x84:  mov    -0xc(%ebp),%edx
0868d6eb +0x87:  mov    %edx,%eax
0868d6ed +0x89:  add    %eax,%eax
0868d6ef +0x8b:  add    %edx,%eax
0868d6f1 +0x8d:  shl    $0x2,%eax
0868d6f4 +0x90:  add    0xc(%ebp),%eax
0868d6f7 +0x93:  mov    (%eax),%eax
0868d6f9 +0x95:  mov    %ebx,0xc(%esp)
0868d6fd +0x99:  mov    %ecx,0x8(%esp)
0868d701 +0x9d:  mov    %eax,0x4(%esp)
0868d705 +0xa1:  mov    0x8(%ebp),%eax
0868d708 +0xa4:  mov    %eax,(%esp)
0868d70b +0xa7:  call   0868d580 <_ZN5CUser24set_ingame_event_historyEiii>  ; CUser::set_ingame_event_history(int, int, int)
0868d710 +0xac:  addl   $0x1,-0xc(%ebp)
0868d714 +0xb0:  cmpl   $0x1d,-0xc(%ebp)
0868d718 +0xb4:  setle  %al
0868d71b +0xb7:  test   %al,%al
0868d71d +0xb9:  jne    0868d681 <+0x1d>
0868d723 +0xbf:  jmp    0868d726 <+0xc2>
0868d725 +0xc1:  nop
0868d726 +0xc2:  add    $0x24,%esp
0868d729 +0xc5:  pop    %ebx
0868d72a +0xc6:  pop    %ebp
0868d72b +0xc7:  ret
```

## 反编译 C

```c
// CUser::set_ingame_event_history @ 0x868d664

/* CUser::set_ingame_event_history(SIG_INGAME_EVENT_HISTORY*) */

void __thiscall CUser::set_ingame_event_history(CUser *this,SIG_INGAME_EVENT_HISTORY *param_1)

{
  char cVar1;
  CDataManager *this_00;
  int iVar2;
  int local_10;
  
  if (param_1 != (SIG_INGAME_EVENT_HISTORY *)0x0) {
    for (local_10 = 0; local_10 < 0x1e; local_10 = local_10 + 1) {
      if (*(int *)(param_1 + local_10 * 0xc) != 0) {
        this_00 = (CDataManager *)G_CDataManager();
        iVar2 = CDataManager::get_event_script_mng(this_00);
        cVar1 = EventClassify::CEventScriptMng::is_current_ingame_event_record_type(iVar2);
        if (cVar1 != '\0') {
          set_ingame_event_history
                    (this,*(int *)(param_1 + local_10 * 0xc),*(int *)(param_1 + local_10 * 0xc + 4),
                     *(int *)(param_1 + local_10 * 0xc + 8));
        }
      }
    }
  }
  return;
}
```
