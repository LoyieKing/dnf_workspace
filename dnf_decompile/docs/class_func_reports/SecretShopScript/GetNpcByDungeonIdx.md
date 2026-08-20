# GetNpcByDungeonIdx

`_ZN16SecretShopScript18GetNpcByDungeonIdxERiii`

`SecretShopScript::GetNpcByDungeonIdx(int&, int, int)`

| 类 | 地址 |
|---|---|
| `SecretShopScript` | `0x08a828f8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08a828f8  _ZN16SecretShopScript18GetNpcByDungeonIdxERiii
#           SecretShopScript::GetNpcByDungeonIdx(int&, int, int)
# range [0x08a828f8, 0x08a8293b]
08a828f8 +0x00:  push   %ebp
08a828f9 +0x01:  mov    %esp,%ebp
08a828fb +0x03:  sub    $0x28,%esp
08a828fe +0x06:  mov    0x8(%ebp),%edx
08a82901 +0x09:  lea    -0x10(%ebp),%eax
08a82904 +0x0c:  lea    0x14(%ebp),%ecx
08a82907 +0x0f:  mov    %ecx,0x8(%esp)
08a8290b +0x13:  mov    %edx,0x4(%esp)
08a8290f +0x17:  mov    %eax,(%esp)
08a82912 +0x1a:  call   08a83798 <_GLOBAL__I__Z22importSecretShopScriptP16SecretShopScriptPKc+0x50a>  ; global constructors keyed to importSecretShopScript(SecretShopScript*, char const*)+0x50a
08a82917 +0x1f:  sub    $0x4,%esp
08a8291a +0x22:  lea    -0x10(%ebp),%eax
08a8291d +0x25:  mov    %eax,0xc(%esp)
08a82921 +0x29:  mov    0x10(%ebp),%eax
08a82924 +0x2c:  mov    %eax,0x8(%esp)
08a82928 +0x30:  mov    0xc(%ebp),%eax
08a8292b +0x33:  mov    %eax,0x4(%esp)
08a8292f +0x37:  mov    0x8(%ebp),%eax
08a82932 +0x3a:  mov    %eax,(%esp)
08a82935 +0x3d:  call   08a82998 <_ZN16SecretShopScript9GetNpcIdxERiiRSt4pairISt17_Rb_tree_iteratorIS1_IKi12stDungeonNpcEES6_E>  ; SecretShopScript::GetNpcIdx(int&, int, std::pair<std::_Rb_tree_iterator<std::pair<int const, stDungeonNpc> >, std::_Rb_tree_iterator<std::pair<int const, stDungeonNpc> > >&)
08a8293a +0x42:  leave
08a8293b +0x43:  ret
```

## 反编译 C

```c
// SecretShopScript::GetNpcByDungeonIdx @ 0x8a828f8

/* SecretShopScript::GetNpcByDungeonIdx(int&, int, int) */

void SecretShopScript::GetNpcByDungeonIdx(int *param_1,int param_2,int param_3)

{
  int local_14 [4];
  
  std::multimap<int,stDungeonNpc,std::less<int>,std::allocator<std::pair<int_const,stDungeonNpc>>>::
  equal_range(local_14);
  GetNpcIdx((SecretShopScript *)param_1,(int *)param_2,param_3,(pair *)local_14);
  return;
}
```
