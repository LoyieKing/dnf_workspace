# DateTime

`_ZN10CSimpleLog8DateTimeC1Ev`

`CSimpleLog::DateTime::DateTime()`

| 类 | 地址 |
|---|---|
| `CSimpleLog::DateTime` | `0x0854fa02` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0854fa02  _ZN10CSimpleLog8DateTimeC1Ev
#           CSimpleLog::DateTime::DateTime()
# range [0x0854fa02, 0x0854fa87]
0854fa02 +0x00:  push   %ebp
0854fa03 +0x01:  mov    %esp,%ebp
0854fa05 +0x03:  sub    $0x58,%esp
0854fa08 +0x06:  movl   $0x0,(%esp)
0854fa0f +0x0d:  call   0807d750 <_init+0x48>
0854fa14 +0x12:  mov    %eax,-0x10(%ebp)
0854fa17 +0x15:  lea    -0x3c(%ebp),%eax
0854fa1a +0x18:  mov    %eax,0x4(%esp)
0854fa1e +0x1c:  lea    -0x10(%ebp),%eax
0854fa21 +0x1f:  mov    %eax,(%esp)
0854fa24 +0x22:  call   0807e360 <_init+0xc58>
0854fa29 +0x27:  mov    %eax,-0xc(%ebp)
0854fa2c +0x2a:  mov    -0xc(%ebp),%eax
0854fa2f +0x2d:  mov    0x14(%eax),%eax
0854fa32 +0x30:  add    $0x76c,%ax
0854fa36 +0x34:  mov    %eax,%edx
0854fa38 +0x36:  mov    0x8(%ebp),%eax
0854fa3b +0x39:  mov    %dx,(%eax)
0854fa3e +0x3c:  mov    -0xc(%ebp),%eax
0854fa41 +0x3f:  mov    0x10(%eax),%eax
0854fa44 +0x42:  add    $0x1,%eax
0854fa47 +0x45:  mov    %eax,%edx
0854fa49 +0x47:  mov    0x8(%ebp),%eax
0854fa4c +0x4a:  mov    %dl,0x2(%eax)
0854fa4f +0x4d:  mov    -0xc(%ebp),%eax
0854fa52 +0x50:  mov    0xc(%eax),%eax
0854fa55 +0x53:  mov    %eax,%edx
0854fa57 +0x55:  mov    0x8(%ebp),%eax
0854fa5a +0x58:  mov    %dl,0x3(%eax)
0854fa5d +0x5b:  mov    -0xc(%ebp),%eax
0854fa60 +0x5e:  mov    0x8(%eax),%eax
0854fa63 +0x61:  mov    %eax,%edx
0854fa65 +0x63:  mov    0x8(%ebp),%eax
0854fa68 +0x66:  mov    %dl,0x4(%eax)
0854fa6b +0x69:  mov    -0xc(%ebp),%eax
0854fa6e +0x6c:  mov    0x4(%eax),%eax
0854fa71 +0x6f:  mov    %eax,%edx
0854fa73 +0x71:  mov    0x8(%ebp),%eax
0854fa76 +0x74:  mov    %dl,0x5(%eax)
0854fa79 +0x77:  mov    -0xc(%ebp),%eax
0854fa7c +0x7a:  mov    (%eax),%eax
0854fa7e +0x7c:  mov    %eax,%edx
0854fa80 +0x7e:  mov    0x8(%ebp),%eax
0854fa83 +0x81:  mov    %dl,0x6(%eax)
0854fa86 +0x84:  leave
0854fa87 +0x85:  ret
```

## 反编译 C

```c
// CSimpleLog::DateTime::DateTime @ 0x854fa02

/* CSimpleLog::DateTime::DateTime() */

void __thiscall CSimpleLog::DateTime::DateTime(DateTime *this)

{
  tm *ptVar1;
  tm local_40;
  time_t local_14 [4];
  
  local_14[0] = time((time_t *)0x0);
  ptVar1 = localtime_r(local_14,&local_40);
  *(short *)this = (short)ptVar1->tm_year + 0x76c;
  this[2] = (DateTime)((char)ptVar1->tm_mon + '\x01');
  this[3] = SUB41(ptVar1->tm_mday,0);
  this[4] = SUB41(ptVar1->tm_hour,0);
  this[5] = SUB41(ptVar1->tm_min,0);
  this[6] = SUB41(ptVar1->tm_sec,0);
  return;
}
```
