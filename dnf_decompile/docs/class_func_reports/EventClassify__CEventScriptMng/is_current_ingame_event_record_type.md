# is_current_ingame_event_record_type

`_ZN13EventClassify15CEventScriptMng35is_current_ingame_event_record_typeEi`

`EventClassify::CEventScriptMng::is_current_ingame_event_record_type(int)`

| 类 | 地址 |
|---|---|
| `EventClassify::CEventScriptMng` | `0x0810c75c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810c75c  _ZN13EventClassify15CEventScriptMng35is_current_ingame_event_record_typeEi
#           EventClassify::CEventScriptMng::is_current_ingame_event_record_type(int)
# range [0x0810c75c, 0x0810c7b7]
0810c75c +0x00:  push   %ebp
0810c75d +0x01:  mov    %esp,%ebp
0810c75f +0x03:  sub    $0x28,%esp
0810c762 +0x06:  mov    0x8(%ebp),%edx
0810c765 +0x09:  lea    -0x10(%ebp),%eax
0810c768 +0x0c:  lea    0xc(%ebp),%ecx
0810c76b +0x0f:  mov    %ecx,0x8(%esp)
0810c76f +0x13:  mov    %edx,0x4(%esp)
0810c773 +0x17:  mov    %eax,(%esp)
0810c776 +0x1a:  call   081118a4 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xdb6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xdb6
0810c77b +0x1f:  sub    $0x4,%esp
0810c77e +0x22:  mov    0x8(%ebp),%edx
0810c781 +0x25:  lea    -0xc(%ebp),%eax
0810c784 +0x28:  mov    %edx,0x4(%esp)
0810c788 +0x2c:  mov    %eax,(%esp)
0810c78b +0x2f:  call   081117e0 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xcf2>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xcf2
0810c790 +0x34:  sub    $0x4,%esp
0810c793 +0x37:  lea    -0xc(%ebp),%eax
0810c796 +0x3a:  mov    %eax,0x4(%esp)
0810c79a +0x3e:  lea    -0x10(%ebp),%eax
0810c79d +0x41:  mov    %eax,(%esp)
0810c7a0 +0x44:  call   08111806 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xd18>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xd18
0810c7a5 +0x49:  test   %al,%al
0810c7a7 +0x4b:  je     0810c7b0 <+0x54>
0810c7a9 +0x4d:  mov    $0x1,%eax
0810c7ae +0x52:  jmp    0810c7b5 <+0x59>
0810c7b0 +0x54:  mov    $0x0,%eax
0810c7b5 +0x59:  leave
0810c7b6 +0x5a:  ret
0810c7b7 +0x5b:  nop
```

## 反编译 C

```c
// EventClassify::CEventScriptMng::is_current_ingame_event_record_type @ 0x810c75c

/* EventClassify::CEventScriptMng::is_current_ingame_event_record_type(int) */

bool EventClassify::CEventScriptMng::is_current_ingame_event_record_type(int param_1)

{
  char cVar1;
  _Rb_tree_iterator<std::pair<int_const,InGameEventInfo>> local_14 [4];
  map<int,InGameEventInfo,std::less<int>,std::allocator<std::pair<int_const,InGameEventInfo>>>
  local_10 [12];
  
  std::map<int,InGameEventInfo,std::less<int>,std::allocator<std::pair<int_const,InGameEventInfo>>>
  ::find((int *)local_14);
  std::map<int,InGameEventInfo,std::less<int>,std::allocator<std::pair<int_const,InGameEventInfo>>>
  ::end(local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,InGameEventInfo>>::operator!=
                    (local_14,(_Rb_tree_iterator *)local_10);
  return cVar1 != '\0';
}
```
