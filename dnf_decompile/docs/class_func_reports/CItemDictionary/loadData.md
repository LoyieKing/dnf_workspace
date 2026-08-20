# loadData

`_ZN15CItemDictionary8loadDataEP5CUserPc`

`CItemDictionary::loadData(CUser*, char*)`

| 类 | 地址 |
|---|---|
| `CItemDictionary` | `0x0811d79a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0811d79a  _ZN15CItemDictionary8loadDataEP5CUserPc
#           CItemDictionary::loadData(CUser*, char*)
# range [0x0811d79a, 0x0811d7df]
0811d79a +0x00:  push   %ebp
0811d79b +0x01:  mov    %esp,%ebp
0811d79d +0x03:  sub    $0x28,%esp
0811d7a0 +0x06:  mov    0x8(%ebp),%eax
0811d7a3 +0x09:  mov    (%eax),%eax
0811d7a5 +0x0b:  add    $0x1c,%eax
0811d7a8 +0x0e:  mov    (%eax),%edx
0811d7aa +0x10:  mov    0x8(%ebp),%eax
0811d7ad +0x13:  mov    %eax,(%esp)
0811d7b0 +0x16:  call   *%edx
0811d7b2 +0x18:  mov    0x10(%ebp),%eax
0811d7b5 +0x1b:  mov    %eax,-0xc(%ebp)
0811d7b8 +0x1e:  mov    -0xc(%ebp),%eax
0811d7bb +0x21:  lea    0x4(%eax),%edx
0811d7be +0x24:  mov    0x8(%ebp),%eax
0811d7c1 +0x27:  add    $0x5,%eax
0811d7c4 +0x2a:  movl   $0x1388,0x8(%esp)
0811d7cc +0x32:  mov    %edx,0x4(%esp)
0811d7d0 +0x36:  mov    %eax,(%esp)
0811d7d3 +0x39:  call   0807d8a0 <_init+0x198>
0811d7d8 +0x3e:  mov    $0x1,%eax
0811d7dd +0x43:  leave
0811d7de +0x44:  ret
0811d7df +0x45:  nop
```

## 反编译 C

```c
// CItemDictionary::loadData @ 0x811d79a

/* CItemDictionary::loadData(CUser*, char*) */

undefined4 __thiscall CItemDictionary::loadData(CItemDictionary *this,CUser *param_1,char *param_2)

{
  (**(code **)(*(int *)this + 0x1c))(this);
  memcpy(this + 5,param_2 + 4,5000);
  return 1;
}
```
