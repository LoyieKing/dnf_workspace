# IsInvalidItem2Delete

`_ZN23DeleteInvalidItemScript20IsInvalidItem2DeleteEi`

`DeleteInvalidItemScript::IsInvalidItem2Delete(int)`

| 类 | 地址 |
|---|---|
| `DeleteInvalidItemScript` | `0x08ac2096` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ac2096  _ZN23DeleteInvalidItemScript20IsInvalidItem2DeleteEi
#           DeleteInvalidItemScript::IsInvalidItem2Delete(int)
# range [0x08ac2096, 0x08ac20f7]
08ac2096 +0x00:  push   %ebp
08ac2097 +0x01:  mov    %esp,%ebp
08ac2099 +0x03:  sub    $0x28,%esp
08ac209c +0x06:  mov    0x8(%ebp),%eax
08ac209f +0x09:  lea    0x8(%eax),%ecx
08ac20a2 +0x0c:  lea    -0x10(%ebp),%eax
08ac20a5 +0x0f:  lea    0xc(%ebp),%edx
08ac20a8 +0x12:  mov    %edx,0x8(%esp)
08ac20ac +0x16:  mov    %ecx,0x4(%esp)
08ac20b0 +0x1a:  mov    %eax,(%esp)
08ac20b3 +0x1d:  call   08ac238a <_GLOBAL__I__ZN23DeleteInvalidItemScriptC2Ev+0x19b>  ; global constructors keyed to DeleteInvalidItemScript::DeleteInvalidItemScript()+0x19b
08ac20b8 +0x22:  sub    $0x4,%esp
08ac20bb +0x25:  mov    0x8(%ebp),%eax
08ac20be +0x28:  lea    0x8(%eax),%edx
08ac20c1 +0x2b:  lea    -0xc(%ebp),%eax
08ac20c4 +0x2e:  mov    %edx,0x4(%esp)
08ac20c8 +0x32:  mov    %eax,(%esp)
08ac20cb +0x35:  call   08ac23b6 <_GLOBAL__I__ZN23DeleteInvalidItemScriptC2Ev+0x1c7>  ; global constructors keyed to DeleteInvalidItemScript::DeleteInvalidItemScript()+0x1c7
08ac20d0 +0x3a:  sub    $0x4,%esp
08ac20d3 +0x3d:  lea    -0xc(%ebp),%eax
08ac20d6 +0x40:  mov    %eax,0x4(%esp)
08ac20da +0x44:  lea    -0x10(%ebp),%eax
08ac20dd +0x47:  mov    %eax,(%esp)
08ac20e0 +0x4a:  call   08ac23dc <_GLOBAL__I__ZN23DeleteInvalidItemScriptC2Ev+0x1ed>  ; global constructors keyed to DeleteInvalidItemScript::DeleteInvalidItemScript()+0x1ed
08ac20e5 +0x4f:  test   %al,%al
08ac20e7 +0x51:  je     08ac20f0 <+0x5a>
08ac20e9 +0x53:  mov    $0x0,%eax
08ac20ee +0x58:  jmp    08ac20f5 <+0x5f>
08ac20f0 +0x5a:  mov    $0x1,%eax
08ac20f5 +0x5f:  leave
08ac20f6 +0x60:  ret
08ac20f7 +0x61:  nop
```

## 反编译 C

```c
// DeleteInvalidItemScript::IsInvalidItem2Delete @ 0x8ac2096

/* DeleteInvalidItemScript::IsInvalidItem2Delete(int) */

bool DeleteInvalidItemScript::IsInvalidItem2Delete(int param_1)

{
  char cVar1;
  _Rb_tree_iterator<std::pair<int_const,DeleteInvalidItemScript::DeleteInvalidItemData>>
  local_14 [4];
  map<int,DeleteInvalidItemScript::DeleteInvalidItemData,std::less<int>,std::allocator<std::pair<int_const,DeleteInvalidItemScript::DeleteInvalidItemData>>>
  local_10 [12];
  
  std::
  map<int,DeleteInvalidItemScript::DeleteInvalidItemData,std::less<int>,std::allocator<std::pair<int_const,DeleteInvalidItemScript::DeleteInvalidItemData>>>
  ::find((int *)local_14);
  std::
  map<int,DeleteInvalidItemScript::DeleteInvalidItemData,std::less<int>,std::allocator<std::pair<int_const,DeleteInvalidItemScript::DeleteInvalidItemData>>>
  ::end(local_10);
  cVar1 = std::
          _Rb_tree_iterator<std::pair<int_const,DeleteInvalidItemScript::DeleteInvalidItemData>>::
          operator==(local_14,(_Rb_tree_iterator *)local_10);
  return cVar1 == '\0';
}
```
