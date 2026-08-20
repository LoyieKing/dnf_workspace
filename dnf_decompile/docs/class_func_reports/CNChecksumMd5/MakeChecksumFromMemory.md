# MakeChecksumFromMemory

`_ZN13CNChecksumMd522MakeChecksumFromMemoryEPKhiPhi`

`CNChecksumMd5::MakeChecksumFromMemory(unsigned char const*, int, unsigned char*, int)`

| 类 | 地址 |
|---|---|
| `CNChecksumMd5` | `0x080983ea` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080983ea  _ZN13CNChecksumMd522MakeChecksumFromMemoryEPKhiPhi
#           CNChecksumMd5::MakeChecksumFromMemory(unsigned char const*, int, unsigned char*, int)
# range [0x080983ea, 0x08098469]
080983ea +0x00:  push   %ebp
080983eb +0x01:  mov    %esp,%ebp
080983ed +0x03:  sub    $0x18,%esp
080983f0 +0x06:  mov    0x8(%ebp),%eax
080983f3 +0x09:  mov    0x8(%eax),%eax
080983f6 +0x0c:  test   %eax,%eax
080983f8 +0x0e:  jne    08098401 <+0x17>
080983fa +0x10:  mov    $0x70000000,%eax
080983ff +0x15:  jmp    08098468 <+0x7e>
08098401 +0x17:  mov    0x8(%ebp),%eax
08098404 +0x1a:  mov    (%eax),%eax
08098406 +0x1c:  add    $0x20,%eax
08098409 +0x1f:  mov    (%eax),%edx
0809840b +0x21:  mov    0x8(%ebp),%eax
0809840e +0x24:  mov    %eax,(%esp)
08098411 +0x27:  call   *%edx
08098413 +0x29:  cmp    0x18(%ebp),%eax
08098416 +0x2c:  setg   %al
08098419 +0x2f:  test   %al,%al
0809841b +0x31:  je     08098424 <+0x3a>
0809841d +0x33:  mov    $0x70000001,%eax
08098422 +0x38:  jmp    08098468 <+0x7e>
08098424 +0x3a:  mov    0x8(%ebp),%eax
08098427 +0x3d:  mov    0x8(%eax),%eax
0809842a +0x40:  mov    %eax,(%esp)
0809842d +0x43:  call   080b2ae0 <_Z10md5_startsP11md5_context>  ; md5_starts(md5_context*)
08098432 +0x48:  mov    0x8(%ebp),%eax
08098435 +0x4b:  mov    0x8(%eax),%eax
08098438 +0x4e:  mov    0x10(%ebp),%edx
0809843b +0x51:  mov    %edx,0x8(%esp)
0809843f +0x55:  mov    0xc(%ebp),%edx
08098442 +0x58:  mov    %edx,0x4(%esp)
08098446 +0x5c:  mov    %eax,(%esp)
08098449 +0x5f:  call   080b3a8d <_Z10md5_updateP11md5_contextPhi>  ; md5_update(md5_context*, unsigned char*, int)
0809844e +0x64:  mov    0x8(%ebp),%eax
08098451 +0x67:  mov    0x8(%eax),%eax
08098454 +0x6a:  mov    0x14(%ebp),%edx
08098457 +0x6d:  mov    %edx,0x4(%esp)
0809845b +0x71:  mov    %eax,(%esp)
0809845e +0x74:  call   080b3b8d <_Z10md5_finishP11md5_contextPh>  ; md5_finish(md5_context*, unsigned char*)
08098463 +0x79:  mov    $0x6fffffff,%eax
08098468 +0x7e:  leave
08098469 +0x7f:  ret
```

## 反编译 C

```c
// CNChecksumMd5::MakeChecksumFromMemory @ 0x80983ea

/* CNChecksumMd5::MakeChecksumFromMemory(unsigned char const*, int, unsigned char*, int) */

undefined4 __thiscall
CNChecksumMd5::MakeChecksumFromMemory
          (CNChecksumMd5 *this,uchar *param_1,int param_2,uchar *param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(this + 8) == 0) {
    uVar1 = 0x70000000;
  }
  else {
    iVar2 = (**(code **)(*(int *)this + 0x20))(this);
    if (param_4 < iVar2) {
      uVar1 = 0x70000001;
    }
    else {
      md5_starts(*(md5_context **)(this + 8));
      md5_update(*(md5_context **)(this + 8),param_1,param_2);
      md5_finish(*(md5_context **)(this + 8),param_3);
      uVar1 = 0x6fffffff;
    }
  }
  return uVar1;
}
```
