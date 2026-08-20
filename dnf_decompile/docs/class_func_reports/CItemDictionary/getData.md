# getData

`_ZNK15CItemDictionary7getDataEPc`

`CItemDictionary::getData(char*) const`

| 类 | 地址 |
|---|---|
| `CItemDictionary` | `0x0811d7e0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0811d7e0  _ZNK15CItemDictionary7getDataEPc
#           CItemDictionary::getData(char*) const
# range [0x0811d7e0, 0x0811d80d]
0811d7e0 +0x00:  push   %ebp
0811d7e1 +0x01:  mov    %esp,%ebp
0811d7e3 +0x03:  sub    $0x28,%esp
0811d7e6 +0x06:  mov    0xc(%ebp),%eax
0811d7e9 +0x09:  mov    %eax,-0xc(%ebp)
0811d7ec +0x0c:  mov    0x8(%ebp),%eax
0811d7ef +0x0f:  lea    0x5(%eax),%edx
0811d7f2 +0x12:  mov    -0xc(%ebp),%eax
0811d7f5 +0x15:  add    $0x4,%eax
0811d7f8 +0x18:  movl   $0x1388,0x8(%esp)
0811d800 +0x20:  mov    %edx,0x4(%esp)
0811d804 +0x24:  mov    %eax,(%esp)
0811d807 +0x27:  call   0807d8a0 <_init+0x198>
0811d80c +0x2c:  leave
0811d80d +0x2d:  ret
```

## 反编译 C

```c
// CItemDictionary::getData @ 0x811d7e0

/* CItemDictionary::getData(char*) const */

void __thiscall CItemDictionary::getData(CItemDictionary *this,char *param_1)

{
  memcpy(param_1 + 4,this + 5,5000);
  return;
}
```
