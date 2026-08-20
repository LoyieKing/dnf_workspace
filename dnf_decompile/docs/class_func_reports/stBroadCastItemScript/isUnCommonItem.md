# isUnCommonItem

`_ZNK21stBroadCastItemScript14isUnCommonItemEi`

`stBroadCastItemScript::isUnCommonItem(int) const`

| 类 | 地址 |
|---|---|
| `stBroadCastItemScript` | `0x08918d9c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08918d9c  _ZNK21stBroadCastItemScript14isUnCommonItemEi
#           stBroadCastItemScript::isUnCommonItem(int) const
# range [0x08918d9c, 0x08918dfd]
08918d9c +0x00:  push   %ebp
08918d9d +0x01:  mov    %esp,%ebp
08918d9f +0x03:  sub    $0x28,%esp
08918da2 +0x06:  mov    0x8(%ebp),%eax
08918da5 +0x09:  lea    0xc(%eax),%ecx
08918da8 +0x0c:  lea    -0x10(%ebp),%eax
08918dab +0x0f:  lea    0xc(%ebp),%edx
08918dae +0x12:  mov    %edx,0x8(%esp)
08918db2 +0x16:  mov    %ecx,0x4(%esp)
08918db6 +0x1a:  mov    %eax,(%esp)
08918db9 +0x1d:  call   08922102 <_GLOBAL__I_PVP_NORMAL_BATTLE_TIME+0x8de1>  ; global constructors keyed to PVP_NORMAL_BATTLE_TIME+0x8de1
08918dbe +0x22:  sub    $0x4,%esp
08918dc1 +0x25:  mov    0x8(%ebp),%eax
08918dc4 +0x28:  lea    0xc(%eax),%edx
08918dc7 +0x2b:  lea    -0xc(%ebp),%eax
08918dca +0x2e:  mov    %edx,0x4(%esp)
08918dce +0x32:  mov    %eax,(%esp)
08918dd1 +0x35:  call   0892212e <_GLOBAL__I_PVP_NORMAL_BATTLE_TIME+0x8e0d>  ; global constructors keyed to PVP_NORMAL_BATTLE_TIME+0x8e0d
08918dd6 +0x3a:  sub    $0x4,%esp
08918dd9 +0x3d:  lea    -0xc(%ebp),%eax
08918ddc +0x40:  mov    %eax,0x4(%esp)
08918de0 +0x44:  lea    -0x10(%ebp),%eax
08918de3 +0x47:  mov    %eax,(%esp)
08918de6 +0x4a:  call   08922154 <_GLOBAL__I_PVP_NORMAL_BATTLE_TIME+0x8e33>  ; global constructors keyed to PVP_NORMAL_BATTLE_TIME+0x8e33
08918deb +0x4f:  test   %al,%al
08918ded +0x51:  je     08918df6 <+0x5a>
08918def +0x53:  mov    $0x1,%eax
08918df4 +0x58:  jmp    08918dfb <+0x5f>
08918df6 +0x5a:  mov    $0x0,%eax
08918dfb +0x5f:  leave
08918dfc +0x60:  ret
08918dfd +0x61:  nop
```

## 反编译 C

```c
// stBroadCastItemScript::isUnCommonItem @ 0x8918d9c

/* stBroadCastItemScript::isUnCommonItem(int) const */

bool stBroadCastItemScript::isUnCommonItem(int param_1)

{
  char cVar1;
  _Rb_tree_const_iterator<std::pair<int_const,std::vector<int,std::allocator<int>>>> local_14 [4];
  map<int,std::vector<int,std::allocator<int>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<int,std::allocator<int>>>>>
  local_10 [12];
  
  std::
  map<int,std::vector<int,std::allocator<int>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<int,std::allocator<int>>>>>
  ::find((int *)local_14);
  std::
  map<int,std::vector<int,std::allocator<int>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<int,std::allocator<int>>>>>
  ::end(local_10);
  cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,std::vector<int,std::allocator<int>>>>::
          operator!=(local_14,(_Rb_tree_const_iterator *)local_10);
  return cVar1 != '\0';
}
```
