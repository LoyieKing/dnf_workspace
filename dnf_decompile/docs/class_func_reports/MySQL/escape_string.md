# escape_string

`_ZN5MySQL13escape_stringEPcPKc`

`MySQL::escape_string(char*, char const*)`

| 类 | 地址 |
|---|---|
| `MySQL` | `0x083f48aa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083f48aa  _ZN5MySQL13escape_stringEPcPKc
#           MySQL::escape_string(char*, char const*)
# range [0x083f48aa, 0x083f48dd]
083f48aa +0x00:  push   %ebp
083f48ab +0x01:  mov    %esp,%ebp
083f48ad +0x03:  sub    $0x18,%esp
083f48b0 +0x06:  mov    0x10(%ebp),%eax
083f48b3 +0x09:  mov    %eax,(%esp)
083f48b6 +0x0c:  call   0807e3b0 <_init+0xca8>
083f48bb +0x11:  mov    0x8(%ebp),%edx
083f48be +0x14:  mov    0x4(%edx),%edx
083f48c1 +0x17:  mov    %eax,0xc(%esp)
083f48c5 +0x1b:  mov    0x10(%ebp),%eax
083f48c8 +0x1e:  mov    %eax,0x8(%esp)
083f48cc +0x22:  mov    0xc(%ebp),%eax
083f48cf +0x25:  mov    %eax,0x4(%esp)
083f48d3 +0x29:  mov    %edx,(%esp)
083f48d6 +0x2c:  call   0873d6f0 <mysql_real_escape_string>
083f48db +0x31:  leave
083f48dc +0x32:  ret
083f48dd +0x33:  nop
```

## 反编译 C

```c
// MySQL::escape_string @ 0x83f48aa

/* MySQL::escape_string(char*, char const*) */

void __thiscall MySQL::escape_string(MySQL *this,char *param_1,char *param_2)

{
  size_t sVar1;
  
  sVar1 = strlen(param_2);
  mysql_real_escape_string(*(undefined4 *)(this + 4),param_1,param_2,sVar1);
  return;
}
```
