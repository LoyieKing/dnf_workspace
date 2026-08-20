# getHashCode

`_ZN10CInventory11getHashCodeEPh`

`CInventory::getHashCode(unsigned char*)`

| 类 | 地址 |
|---|---|
| `CInventory` | `0x084fa91c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084fa91c  _ZN10CInventory11getHashCodeEPh
#           CInventory::getHashCode(unsigned char*)
# range [0x084fa91c, 0x084fa9d3]
084fa91c +0x00:  push   %ebp
084fa91d +0x01:  mov    %esp,%ebp
084fa91f +0x03:  sub    $0xf8,%esp
084fa925 +0x09:  lea    -0xe0(%ebp),%eax
084fa92b +0x0f:  mov    %eax,(%esp)
084fa92e +0x12:  call   080b2ae0 <_Z10md5_startsP11md5_context>  ; md5_starts(md5_context*)
084fa933 +0x17:  mov    0x8(%ebp),%eax
084fa936 +0x1a:  add    $0x1c,%eax
084fa939 +0x1d:  movl   $0x53e,0x8(%esp)
084fa941 +0x25:  mov    %eax,0x4(%esp)
084fa945 +0x29:  lea    -0xe0(%ebp),%eax
084fa94b +0x2f:  mov    %eax,(%esp)
084fa94e +0x32:  call   080b3a8d <_Z10md5_updateP11md5_contextPhi>  ; md5_update(md5_context*, unsigned char*, int)
084fa953 +0x37:  mov    0x8(%ebp),%eax
084fa956 +0x3a:  mov    0x650(%eax),%eax
084fa95c +0x40:  movl   $0x4a58,0x8(%esp)
084fa964 +0x48:  mov    %eax,0x4(%esp)
084fa968 +0x4c:  lea    -0xe0(%ebp),%eax
084fa96e +0x52:  mov    %eax,(%esp)
084fa971 +0x55:  call   080b3a8d <_Z10md5_updateP11md5_contextPhi>  ; md5_update(md5_context*, unsigned char*, int)
084fa976 +0x5a:  mov    0x8(%ebp),%eax
084fa979 +0x5d:  mov    0x654(%eax),%eax
084fa97f +0x63:  movl   $0x1905,0x8(%esp)
084fa987 +0x6b:  mov    %eax,0x4(%esp)
084fa98b +0x6f:  lea    -0xe0(%ebp),%eax
084fa991 +0x75:  mov    %eax,(%esp)
084fa994 +0x78:  call   080b3a8d <_Z10md5_updateP11md5_contextPhi>  ; md5_update(md5_context*, unsigned char*, int)
084fa999 +0x7d:  mov    0x8(%ebp),%eax
084fa99c +0x80:  mov    0x6e4(%eax),%eax
084fa9a2 +0x86:  movl   $0x39aa,0x8(%esp)
084fa9aa +0x8e:  mov    %eax,0x4(%esp)
084fa9ae +0x92:  lea    -0xe0(%ebp),%eax
084fa9b4 +0x98:  mov    %eax,(%esp)
084fa9b7 +0x9b:  call   080b3a8d <_Z10md5_updateP11md5_contextPhi>  ; md5_update(md5_context*, unsigned char*, int)
084fa9bc +0xa0:  mov    0xc(%ebp),%eax
084fa9bf +0xa3:  mov    %eax,0x4(%esp)
084fa9c3 +0xa7:  lea    -0xe0(%ebp),%eax
084fa9c9 +0xad:  mov    %eax,(%esp)
084fa9cc +0xb0:  call   080b3b8d <_Z10md5_finishP11md5_contextPh>  ; md5_finish(md5_context*, unsigned char*)
084fa9d1 +0xb5:  leave
084fa9d2 +0xb6:  ret
084fa9d3 +0xb7:  nop
```

## 反编译 C

```c
// CInventory::getHashCode @ 0x84fa91c

/* CInventory::getHashCode(unsigned char*) */

void __thiscall CInventory::getHashCode(CInventory *this,uchar *param_1)

{
  md5_context local_e4 [224];
  
  md5_starts(local_e4);
  md5_update(local_e4,(uchar *)(this + 0x1c),0x53e);
  md5_update(local_e4,*(uchar **)(this + 0x650),0x4a58);
  md5_update(local_e4,*(uchar **)(this + 0x654),0x1905);
  md5_update(local_e4,*(uchar **)(this + 0x6e4),0x39aa);
  md5_finish(local_e4,param_1);
  return;
}
```
