# checkEntrance

`_ZN5nexon4cash9NexonCash13checkEntranceEPKcRc`

`nexon::cash::NexonCash::checkEntrance(char const*, char&)`

| 类 | 地址 |
|---|---|
| `nexon::cash::NexonCash` | `0x081ae4ae` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081ae4ae  _ZN5nexon4cash9NexonCash13checkEntranceEPKcRc
#           nexon::cash::NexonCash::checkEntrance(char const*, char&)
# range [0x081ae4ae, 0x081ae4d0]
081ae4ae +0x00:  push   %ebp
081ae4af +0x01:  mov    %esp,%ebp
081ae4b1 +0x03:  sub    $0x18,%esp
081ae4b4 +0x06:  mov    0x8(%ebp),%eax
081ae4b7 +0x09:  mov    (%eax),%eax
081ae4b9 +0x0b:  mov    0x10(%ebp),%edx
081ae4bc +0x0e:  mov    %edx,0x8(%esp)
081ae4c0 +0x12:  mov    0xc(%ebp),%edx
081ae4c3 +0x15:  mov    %edx,0x4(%esp)
081ae4c7 +0x19:  mov    %eax,(%esp)
081ae4ca +0x1c:  call   081ad316 <_ZN5nexon4cash9NCashImpl13checkEntranceEPKcRc>  ; nexon::cash::NCashImpl::checkEntrance(char const*, char&)
081ae4cf +0x21:  leave
081ae4d0 +0x22:  ret
```

## 反编译 C

```c
// nexon::cash::NexonCash::checkEntrance @ 0x81ae4ae

/* nexon::cash::NexonCash::checkEntrance(char const*, char&) */

void __thiscall nexon::cash::NexonCash::checkEntrance(NexonCash *this,char *param_1,char *param_2)

{
  NCashImpl::checkEntrance(*(NCashImpl **)this,param_1,param_2);
  return;
}
```
