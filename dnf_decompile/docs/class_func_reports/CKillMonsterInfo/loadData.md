# loadData

`_ZN16CKillMonsterInfo8loadDataEP5CUserPc`

`CKillMonsterInfo::loadData(CUser*, char*)`

| 类 | 地址 |
|---|---|
| `CKillMonsterInfo` | `0x0854cddc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0854cddc  _ZN16CKillMonsterInfo8loadDataEP5CUserPc
#           CKillMonsterInfo::loadData(CUser*, char*)
# range [0x0854cddc, 0x0854ce8f]
0854cddc +0x00:  push   %ebp
0854cddd +0x01:  mov    %esp,%ebp
0854cddf +0x03:  sub    $0x38,%esp
0854cde2 +0x06:  mov    0x8(%ebp),%eax
0854cde5 +0x09:  mov    (%eax),%eax
0854cde7 +0x0b:  add    $0x1c,%eax
0854cdea +0x0e:  mov    (%eax),%edx
0854cdec +0x10:  mov    0x8(%ebp),%eax
0854cdef +0x13:  mov    %eax,(%esp)
0854cdf2 +0x16:  call   *%edx
0854cdf4 +0x18:  mov    0x10(%ebp),%eax
0854cdf7 +0x1b:  mov    %eax,-0xc(%ebp)
0854cdfa +0x1e:  mov    0x8(%ebp),%eax
0854cdfd +0x21:  lea    0x8(%eax),%edx
0854ce00 +0x24:  mov    -0xc(%ebp),%eax
0854ce03 +0x27:  movl   $0x0,0x10(%esp)
0854ce0b +0x2f:  mov    %edx,0xc(%esp)
0854ce0f +0x33:  movl   $0x5dc,0x8(%esp)
0854ce17 +0x3b:  mov    %eax,0x4(%esp)
0854ce1b +0x3f:  mov    0x8(%ebp),%eax
0854ce1e +0x42:  mov    %eax,(%esp)
0854ce21 +0x45:  call   0854cb42 <_ZN16CKillMonsterInfo18ConvertStructToMapEP15stMonsterInfo_tjRSt3mapIjhSt4lessIjESaISt4pairIKjhEEEb>  ; CKillMonsterInfo::ConvertStructToMap(stMonsterInfo_t*, unsigned int, std::map<unsigned int, unsigned char, std::less<unsigned int>, std::allocator<std::pair<unsigned int const, unsigned char> > >&, bool)
0854ce26 +0x4a:  mov    0x8(%ebp),%eax
0854ce29 +0x4d:  lea    0x20(%eax),%edx
0854ce2c +0x50:  mov    -0xc(%ebp),%eax
0854ce2f +0x53:  add    $0x1d4c,%eax
0854ce34 +0x58:  movl   $0x0,0x10(%esp)
0854ce3c +0x60:  mov    %edx,0xc(%esp)
0854ce40 +0x64:  movl   $0x1770,0x8(%esp)
0854ce48 +0x6c:  mov    %eax,0x4(%esp)
0854ce4c +0x70:  mov    0x8(%ebp),%eax
0854ce4f +0x73:  mov    %eax,(%esp)
0854ce52 +0x76:  call   0854cb42 <_ZN16CKillMonsterInfo18ConvertStructToMapEP15stMonsterInfo_tjRSt3mapIjhSt4lessIjESaISt4pairIKjhEEEb>  ; CKillMonsterInfo::ConvertStructToMap(stMonsterInfo_t*, unsigned int, std::map<unsigned int, unsigned char, std::less<unsigned int>, std::allocator<std::pair<unsigned int const, unsigned char> > >&, bool)
0854ce57 +0x7b:  mov    0x8(%ebp),%eax
0854ce5a +0x7e:  lea    0x38(%eax),%edx
0854ce5d +0x81:  mov    -0xc(%ebp),%eax
0854ce60 +0x84:  add    $0x927c,%eax
0854ce65 +0x89:  movl   $0x1,0x10(%esp)
0854ce6d +0x91:  mov    %edx,0xc(%esp)
0854ce71 +0x95:  movl   $0x5dc,0x8(%esp)
0854ce79 +0x9d:  mov    %eax,0x4(%esp)
0854ce7d +0xa1:  mov    0x8(%ebp),%eax
0854ce80 +0xa4:  mov    %eax,(%esp)
0854ce83 +0xa7:  call   0854cb42 <_ZN16CKillMonsterInfo18ConvertStructToMapEP15stMonsterInfo_tjRSt3mapIjhSt4lessIjESaISt4pairIKjhEEEb>  ; CKillMonsterInfo::ConvertStructToMap(stMonsterInfo_t*, unsigned int, std::map<unsigned int, unsigned char, std::less<unsigned int>, std::allocator<std::pair<unsigned int const, unsigned char> > >&, bool)
0854ce88 +0xac:  mov    $0x1,%eax
0854ce8d +0xb1:  leave
0854ce8e +0xb2:  ret
0854ce8f +0xb3:  nop
```

## 反编译 C

```c
// CKillMonsterInfo::loadData @ 0x854cddc

/* CKillMonsterInfo::loadData(CUser*, char*) */

undefined4 __thiscall
CKillMonsterInfo::loadData(CKillMonsterInfo *this,CUser *param_1,char *param_2)

{
  (**(code **)(*(int *)this + 0x1c))(this);
  ConvertStructToMap(this,(stMonsterInfo_t *)param_2,0x5dc,(map *)(this + 8),false);
  ConvertStructToMap(this,(stMonsterInfo_t *)(param_2 + 0x1d4c),6000,(map *)(this + 0x20),false);
  ConvertStructToMap(this,(stMonsterInfo_t *)(param_2 + 0x927c),0x5dc,(map *)(this + 0x38),true);
  return 1;
}
```
