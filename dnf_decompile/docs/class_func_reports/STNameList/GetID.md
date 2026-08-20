# GetID

`_ZNK10STNameList5GetIDEPKc`

`STNameList::GetID(char const*) const`

| 类 | 地址 |
|---|---|
| `STNameList` | `0x088baf48` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 088baf48  _ZNK10STNameList5GetIDEPKc
#           STNameList::GetID(char const*) const
# range [0x088baf48, 0x088baf76]
088baf48 +0x00:  push   %ebp
088baf49 +0x01:  mov    %esp,%ebp
088baf4b +0x03:  sub    $0x28,%esp
088baf4e +0x06:  mov    0x8(%ebp),%eax
088baf51 +0x09:  mov    0xc(%ebp),%edx
088baf54 +0x0c:  mov    %edx,0x4(%esp)
088baf58 +0x10:  mov    %eax,(%esp)
088baf5b +0x13:  call   088c4348 <_GLOBAL__I_g_script_package+0x218>  ; global constructors keyed to g_script_package+0x218
088baf60 +0x18:  mov    %eax,-0xc(%ebp)
088baf63 +0x1b:  cmpl   $0x0,-0xc(%ebp)
088baf67 +0x1f:  jne    088baf70 <+0x28>
088baf69 +0x21:  mov    $0xffffffff,%eax
088baf6e +0x26:  jmp    088baf75 <+0x2d>
088baf70 +0x28:  mov    -0xc(%ebp),%eax
088baf73 +0x2b:  mov    (%eax),%eax
088baf75 +0x2d:  leave
088baf76 +0x2e:  ret
```

## 反编译 C

```c
// STNameList::GetID @ 0x88baf48

/* STNameList::GetID(char const*) const */

undefined4 STNameList::GetID(char *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)StringUnorderedMap<CharStringHashTrait,int>::get(param_1);
  if (puVar1 == (undefined4 *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = *puVar1;
  }
  return uVar2;
}
```
