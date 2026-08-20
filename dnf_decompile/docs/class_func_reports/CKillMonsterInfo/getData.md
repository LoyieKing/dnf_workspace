# getData

`_ZNK16CKillMonsterInfo7getDataEPc`

`CKillMonsterInfo::getData(char*) const`

| 类 | 地址 |
|---|---|
| `CKillMonsterInfo` | `0x0854ce90` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0854ce90  _ZNK16CKillMonsterInfo7getDataEPc
#           CKillMonsterInfo::getData(char*) const
# range [0x0854ce90, 0x0854cf15]
0854ce90 +0x00:  push   %ebp
0854ce91 +0x01:  mov    %esp,%ebp
0854ce93 +0x03:  sub    $0x28,%esp
0854ce96 +0x06:  mov    0xc(%ebp),%eax
0854ce99 +0x09:  mov    %eax,-0xc(%ebp)
0854ce9c +0x0c:  mov    -0xc(%ebp),%eax
0854ce9f +0x0f:  mov    0x8(%ebp),%edx
0854cea2 +0x12:  add    $0x8,%edx
0854cea5 +0x15:  movl   $0x5dc,0xc(%esp)
0854cead +0x1d:  mov    %eax,0x8(%esp)
0854ceb1 +0x21:  mov    %edx,0x4(%esp)
0854ceb5 +0x25:  mov    0x8(%ebp),%eax
0854ceb8 +0x28:  mov    %eax,(%esp)
0854cebb +0x2b:  call   0854ccbc <_ZNK16CKillMonsterInfo18ConvertMapToStrcutERKSt3mapIjhSt4lessIjESaISt4pairIKjhEEEP15stMonsterInfo_tj>  ; CKillMonsterInfo::ConvertMapToStrcut(std::map<unsigned int, unsigned char, std::less<unsigned int>, std::allocator<std::pair<unsigned int const, unsigned char> > > const&, stMonsterInfo_t*, unsigned int) const
0854cec0 +0x30:  mov    -0xc(%ebp),%eax
0854cec3 +0x33:  lea    0x1d4c(%eax),%edx
0854cec9 +0x39:  mov    0x8(%ebp),%eax
0854cecc +0x3c:  add    $0x20,%eax
0854cecf +0x3f:  movl   $0x1770,0xc(%esp)
0854ced7 +0x47:  mov    %edx,0x8(%esp)
0854cedb +0x4b:  mov    %eax,0x4(%esp)
0854cedf +0x4f:  mov    0x8(%ebp),%eax
0854cee2 +0x52:  mov    %eax,(%esp)
0854cee5 +0x55:  call   0854ccbc <_ZNK16CKillMonsterInfo18ConvertMapToStrcutERKSt3mapIjhSt4lessIjESaISt4pairIKjhEEEP15stMonsterInfo_tj>  ; CKillMonsterInfo::ConvertMapToStrcut(std::map<unsigned int, unsigned char, std::less<unsigned int>, std::allocator<std::pair<unsigned int const, unsigned char> > > const&, stMonsterInfo_t*, unsigned int) const
0854ceea +0x5a:  mov    -0xc(%ebp),%eax
0854ceed +0x5d:  lea    0x927c(%eax),%edx
0854cef3 +0x63:  mov    0x8(%ebp),%eax
0854cef6 +0x66:  add    $0x38,%eax
0854cef9 +0x69:  movl   $0x5dc,0xc(%esp)
0854cf01 +0x71:  mov    %edx,0x8(%esp)
0854cf05 +0x75:  mov    %eax,0x4(%esp)
0854cf09 +0x79:  mov    0x8(%ebp),%eax
0854cf0c +0x7c:  mov    %eax,(%esp)
0854cf0f +0x7f:  call   0854ccbc <_ZNK16CKillMonsterInfo18ConvertMapToStrcutERKSt3mapIjhSt4lessIjESaISt4pairIKjhEEEP15stMonsterInfo_tj>  ; CKillMonsterInfo::ConvertMapToStrcut(std::map<unsigned int, unsigned char, std::less<unsigned int>, std::allocator<std::pair<unsigned int const, unsigned char> > > const&, stMonsterInfo_t*, unsigned int) const
0854cf14 +0x84:  leave
0854cf15 +0x85:  ret
```

## 反编译 C

```c
// CKillMonsterInfo::getData @ 0x854ce90

/* CKillMonsterInfo::getData(char*) const */

void __thiscall CKillMonsterInfo::getData(CKillMonsterInfo *this,char *param_1)

{
  ConvertMapToStrcut(this,(map *)(this + 8),(stMonsterInfo_t *)param_1,0x5dc);
  ConvertMapToStrcut(this,(map *)(this + 0x20),(stMonsterInfo_t *)(param_1 + 0x1d4c),6000);
  ConvertMapToStrcut(this,(map *)(this + 0x38),(stMonsterInfo_t *)(param_1 + 0x927c),0x5dc);
  return;
}
```
