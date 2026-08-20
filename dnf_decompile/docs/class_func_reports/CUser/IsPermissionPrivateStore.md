# IsPermissionPrivateStore

`_ZN5CUser24IsPermissionPrivateStoreEv`

`CUser::IsPermissionPrivateStore()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0865c65c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0865c65c  _ZN5CUser24IsPermissionPrivateStoreEv
#           CUser::IsPermissionPrivateStore()
# range [0x0865c65c, 0x0865c677]
0865c65c +0x00:  push   %ebp
0865c65d +0x01:  mov    %esp,%ebp
0865c65f +0x03:  sub    $0x18,%esp
0865c662 +0x06:  movl   $0x8,0x4(%esp)
0865c66a +0x0e:  mov    0x8(%ebp),%eax
0865c66d +0x11:  mov    %eax,(%esp)
0865c670 +0x14:  call   080e600e <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x144>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x144
0865c675 +0x19:  leave
0865c676 +0x1a:  ret
0865c677 +0x1b:  nop
```

## 反编译 C

```c
// CUser::IsPermissionPrivateStore @ 0x865c65c

/* CUser::IsPermissionPrivateStore() */

void __thiscall CUser::IsPermissionPrivateStore(CUser *this)

{
  isAffectedPremium(this,8);
  return;
}
```
