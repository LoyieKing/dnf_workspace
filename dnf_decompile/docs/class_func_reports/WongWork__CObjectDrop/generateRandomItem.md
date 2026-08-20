# generateRandomItem

`_ZN8WongWork11CObjectDrop18generateRandomItemERKNS_19stGenerateRefData_tERNS_18stGenerateResult_tE`

`WongWork::CObjectDrop::generateRandomItem(WongWork::stGenerateRefData_t const&, WongWork::stGenerateResult_t&)`

| 类 | 地址 |
|---|---|
| `WongWork::CObjectDrop` | `0x0853818a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0853818a  _ZN8WongWork11CObjectDrop18generateRandomItemERKNS_19stGenerateRefData_tERNS_18stGenerateResult_tE
#           WongWork::CObjectDrop::generateRandomItem(WongWork::stGenerateRefData_t const&, WongWork::stGenerateResult_t&)
# range [0x0853818a, 0x08538233]
0853818a +0x00:  push   %ebp
0853818b +0x01:  mov    %esp,%ebp
0853818d +0x03:  push   %edi
0853818e +0x04:  push   %esi
0853818f +0x05:  push   %ebx
08538190 +0x06:  sub    $0x5c,%esp
08538193 +0x09:  movb   $0x0,-0x1d(%ebp)
08538197 +0x0d:  movl   $0x0,-0x1c(%ebp)
0853819e +0x14:  jmp    08538214 <+0x8a>
085381a0 +0x16:  mov    0xc(%ebp),%eax
085381a3 +0x19:  mov    (%eax),%eax
085381a5 +0x1b:  mov    %eax,-0x2c(%ebp)
085381a8 +0x1e:  mov    0xc(%ebp),%eax
085381ab +0x21:  movzbl 0x36(%eax),%eax
085381af +0x25:  movzbl %al,%edi
085381b2 +0x28:  mov    0xc(%ebp),%eax
085381b5 +0x2b:  movzbl 0x35(%eax),%eax
085381b9 +0x2f:  movzbl %al,%esi
085381bc +0x32:  mov    0xc(%ebp),%eax
085381bf +0x35:  movzbl 0x34(%eax),%eax
085381c3 +0x39:  movzbl %al,%ebx
085381c6 +0x3c:  mov    0xc(%ebp),%eax
085381c9 +0x3f:  movzbl 0x34(%eax),%eax
085381cd +0x43:  movzbl %al,%ecx
085381d0 +0x46:  mov    0x8(%ebp),%edx
085381d3 +0x49:  lea    -0x1d(%ebp),%eax
085381d6 +0x4c:  mov    %eax,0x24(%esp)
085381da +0x50:  mov    0x10(%ebp),%eax
085381dd +0x53:  mov    %eax,0x20(%esp)
085381e1 +0x57:  mov    -0x2c(%ebp),%eax
085381e4 +0x5a:  mov    %eax,0x1c(%esp)
085381e8 +0x5e:  movl   $0x0,0x18(%esp)
085381f0 +0x66:  mov    %edi,0x14(%esp)
085381f4 +0x6a:  mov    %esi,0x10(%esp)
085381f8 +0x6e:  mov    %ebx,0xc(%esp)
085381fc +0x72:  movl   $0x0,0x8(%esp)
08538204 +0x7a:  mov    %ecx,0x4(%esp)
08538208 +0x7e:  mov    %edx,(%esp)
0853820b +0x81:  call   08535ed2 <_ZN8WongWork12CMonsterDrop19_generateRandomItemEhchhhiiRNS_18stGenerateResult_tERb>  ; WongWork::CMonsterDrop::_generateRandomItem(unsigned char, char, unsigned char, unsigned char, unsigned char, int, int, WongWork::stGenerateResult_t&, bool&)
08538210 +0x86:  addl   $0x1,-0x1c(%ebp)
08538214 +0x8a:  mov    0xc(%ebp),%eax
08538217 +0x8d:  movzbl 0x37(%eax),%eax
0853821b +0x91:  movsbl %al,%eax
0853821e +0x94:  cmp    -0x1c(%ebp),%eax
08538221 +0x97:  setg   %al
08538224 +0x9a:  test   %al,%al
08538226 +0x9c:  jne    085381a0 <+0x16>
0853822c +0xa2:  add    $0x5c,%esp
0853822f +0xa5:  pop    %ebx
08538230 +0xa6:  pop    %esi
08538231 +0xa7:  pop    %edi
08538232 +0xa8:  pop    %ebp
08538233 +0xa9:  ret
```

## 反编译 C

```c
// WongWork::CObjectDrop::generateRandomItem @ 0x853818a

/* WongWork::CObjectDrop::generateRandomItem(WongWork::stGenerateRefData_t const&,
   WongWork::stGenerateResult_t&) */

void __thiscall
WongWork::CObjectDrop::generateRandomItem
          (CObjectDrop *this,stGenerateRefData_t *param_1,stGenerateResult_t *param_2)

{
  bool local_21;
  int local_20;
  
  local_21 = false;
  for (local_20 = 0; local_20 < (char)param_1[0x37]; local_20 = local_20 + 1) {
    CMonsterDrop::_generateRandomItem
              ((CMonsterDrop *)this,(uchar)param_1[0x34],'\0',(uchar)param_1[0x34],
               (uchar)param_1[0x35],(uchar)param_1[0x36],0,*(int *)param_1,param_2,&local_21);
  }
  return;
}
```
