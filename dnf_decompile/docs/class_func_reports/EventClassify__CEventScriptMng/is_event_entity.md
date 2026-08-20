# is_event_entity

`_ZNK13EventClassify15CEventScriptMng15is_event_entityEi`

`EventClassify::CEventScriptMng::is_event_entity(int) const`

| 类 | 地址 |
|---|---|
| `EventClassify::CEventScriptMng` | `0x0810b9d4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810b9d4  _ZNK13EventClassify15CEventScriptMng15is_event_entityEi
#           EventClassify::CEventScriptMng::is_event_entity(int) const
# range [0x0810b9d4, 0x0810ba35]
0810b9d4 +0x00:  push   %ebp
0810b9d5 +0x01:  mov    %esp,%ebp
0810b9d7 +0x03:  sub    $0x28,%esp
0810b9da +0x06:  mov    0x8(%ebp),%eax
0810b9dd +0x09:  lea    0x30(%eax),%edx
0810b9e0 +0x0c:  lea    -0x10(%ebp),%eax
0810b9e3 +0x0f:  mov    %edx,0x4(%esp)
0810b9e7 +0x13:  mov    %eax,(%esp)
0810b9ea +0x16:  call   0811168a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xb9c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xb9c
0810b9ef +0x1b:  sub    $0x4,%esp
0810b9f2 +0x1e:  mov    0x8(%ebp),%eax
0810b9f5 +0x21:  lea    0x30(%eax),%ecx
0810b9f8 +0x24:  lea    -0xc(%ebp),%eax
0810b9fb +0x27:  lea    0xc(%ebp),%edx
0810b9fe +0x2a:  mov    %edx,0x8(%esp)
0810ba02 +0x2e:  mov    %ecx,0x4(%esp)
0810ba06 +0x32:  mov    %eax,(%esp)
0810ba09 +0x35:  call   0811165e <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xb70>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xb70
0810ba0e +0x3a:  sub    $0x4,%esp
0810ba11 +0x3d:  lea    -0x10(%ebp),%eax
0810ba14 +0x40:  mov    %eax,0x4(%esp)
0810ba18 +0x44:  lea    -0xc(%ebp),%eax
0810ba1b +0x47:  mov    %eax,(%esp)
0810ba1e +0x4a:  call   081116b0 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xbc2>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xbc2
0810ba23 +0x4f:  test   %al,%al
0810ba25 +0x51:  je     0810ba2e <+0x5a>
0810ba27 +0x53:  mov    $0x1,%eax
0810ba2c +0x58:  jmp    0810ba33 <+0x5f>
0810ba2e +0x5a:  mov    $0x0,%eax
0810ba33 +0x5f:  leave
0810ba34 +0x60:  ret
0810ba35 +0x61:  nop
```

## 反编译 C

```c
// EventClassify::CEventScriptMng::is_event_entity @ 0x810b9d4

/* EventClassify::CEventScriptMng::is_event_entity(int) const */

bool EventClassify::CEventScriptMng::is_event_entity(int param_1)

{
  char cVar1;
  map<int,EventClassify::CEventEntity*,std::less<int>,std::allocator<std::pair<int_const,EventClassify::CEventEntity*>>>
  local_14 [4];
  _Rb_tree_const_iterator<std::pair<int_const,EventClassify::CEventEntity*>> local_10 [12];
  
  std::
  map<int,EventClassify::CEventEntity*,std::less<int>,std::allocator<std::pair<int_const,EventClassify::CEventEntity*>>>
  ::end(local_14);
  std::
  map<int,EventClassify::CEventEntity*,std::less<int>,std::allocator<std::pair<int_const,EventClassify::CEventEntity*>>>
  ::find((int *)local_10);
  cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,EventClassify::CEventEntity*>>::
          operator!=(local_10,(_Rb_tree_const_iterator *)local_14);
  return cVar1 != '\0';
}
```
