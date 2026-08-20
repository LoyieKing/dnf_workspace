# GenerateChecksum

`_ZN20WindowsExeFileFamily16GenerateChecksumEP18CodeHackChecksumExP20CodeHackCheckRangeEx`

`WindowsExeFileFamily::GenerateChecksum(CodeHackChecksumEx*, CodeHackCheckRangeEx*)`

| 类 | 地址 |
|---|---|
| `WindowsExeFileFamily` | `0x08574cf0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08574cf0  _ZN20WindowsExeFileFamily16GenerateChecksumEP18CodeHackChecksumExP20CodeHackCheckRangeEx
#           WindowsExeFileFamily::GenerateChecksum(CodeHackChecksumEx*, CodeHackCheckRangeEx*)
# range [0x08574cf0, 0x08574e3d]
08574cf0 +0x000:  push   %ebp
08574cf1 +0x001:  mov    %esp,%ebp
08574cf3 +0x003:  sub    $0x78,%esp
08574cf6 +0x006:  lea    -0x20(%ebp),%eax
08574cf9 +0x009:  mov    %eax,(%esp)
08574cfc +0x00c:  call   085766a6 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x86a>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x86a
08574d01 +0x011:  mov    0xc(%ebp),%eax
08574d04 +0x014:  mov    %eax,(%esp)
08574d07 +0x017:  call   0808a61a <_ZN20CodeHackChecksumData5ClearEv>  ; CodeHackChecksumData::Clear()
08574d0c +0x01c:  mov    0x8(%ebp),%eax
08574d0f +0x01f:  add    $0x18,%eax
08574d12 +0x022:  mov    %eax,0x4(%esp)
08574d16 +0x026:  mov    0xc(%ebp),%eax
08574d19 +0x029:  mov    %eax,(%esp)
08574d1c +0x02c:  call   0808a7ae <_ZN18CodeHackChecksumEx11SetFileNameEPKc>  ; CodeHackChecksumEx::SetFileName(char const*)
08574d21 +0x031:  mov    0x8(%ebp),%eax
08574d24 +0x034:  add    $0x18,%eax
08574d27 +0x037:  mov    %eax,0x4(%esp)
08574d2b +0x03b:  mov    0x10(%ebp),%eax
08574d2e +0x03e:  mov    %eax,(%esp)
08574d31 +0x041:  call   0808a9aa <_ZN20CodeHackCheckRangeEx11SetFileNameEPKc>  ; CodeHackCheckRangeEx::SetFileName(char const*)
08574d36 +0x046:  lea    -0x1c(%ebp),%eax
08574d39 +0x049:  mov    %eax,0xc(%esp)
08574d3d +0x04d:  lea    -0x18(%ebp),%eax
08574d40 +0x050:  mov    %eax,0x8(%esp)
08574d44 +0x054:  lea    -0x14(%ebp),%eax
08574d47 +0x057:  mov    %eax,0x4(%esp)
08574d4b +0x05b:  mov    0x8(%ebp),%eax
08574d4e +0x05e:  mov    %eax,(%esp)
08574d51 +0x061:  call   08574b8e <_ZN20WindowsExeFileFamily13GenerateRangeEPlPmS1_>  ; WindowsExeFileFamily::GenerateRange(long*, unsigned long*, unsigned long*)
08574d56 +0x066:  test   %al,%al
08574d58 +0x068:  je     08574e37 <+0x147>
08574d5e +0x06e:  mov    -0x18(%ebp),%eax
08574d61 +0x071:  mov    %eax,-0x28(%ebp)
08574d64 +0x074:  mov    -0x1c(%ebp),%eax
08574d67 +0x077:  mov    %eax,-0x24(%ebp)
08574d6a +0x07a:  mov    0x10(%ebp),%ecx
08574d6d +0x07d:  mov    -0x28(%ebp),%eax
08574d70 +0x080:  mov    -0x24(%ebp),%edx
08574d73 +0x083:  mov    %eax,0x104(%ecx)
08574d79 +0x089:  mov    %edx,0x108(%ecx)
08574d7f +0x08f:  mov    0x8(%ebp),%eax
08574d82 +0x092:  lea    0xc(%eax),%edx
08574d85 +0x095:  lea    -0x4c(%ebp),%eax
08574d88 +0x098:  mov    %edx,0x4(%esp)
08574d8c +0x09c:  mov    %eax,(%esp)
08574d8f +0x09f:  call   085766b4 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x878>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x878
08574d94 +0x0a4:  sub    $0x4,%esp
08574d97 +0x0a7:  mov    -0x4c(%ebp),%eax
08574d9a +0x0aa:  mov    %eax,-0x20(%ebp)
08574d9d +0x0ad:  jmp    08574e05 <+0x115>
08574d9f +0x0af:  lea    -0x20(%ebp),%eax
08574da2 +0x0b2:  mov    %eax,(%esp)
08574da5 +0x0b5:  call   08576740 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x904>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x904
08574daa +0x0ba:  mov    (%eax),%eax
08574dac +0x0bc:  mov    %eax,-0xc(%ebp)
08574daf +0x0bf:  mov    -0x1c(%ebp),%ecx
08574db2 +0x0c2:  mov    -0x18(%ebp),%edx
08574db5 +0x0c5:  mov    -0x14(%ebp),%eax
08574db8 +0x0c8:  mov    %ecx,0x10(%esp)
08574dbc +0x0cc:  mov    %edx,0xc(%esp)
08574dc0 +0x0d0:  mov    %eax,0x8(%esp)
08574dc4 +0x0d4:  lea    -0x48(%ebp),%eax
08574dc7 +0x0d7:  mov    %eax,0x4(%esp)
08574dcb +0x0db:  mov    -0xc(%ebp),%eax
08574dce +0x0de:  mov    %eax,(%esp)
08574dd1 +0x0e1:  call   085743d4 <_ZN14WindowsExeFile16GenerateChecksumEP16CodeHackChecksumlmm>  ; WindowsExeFile::GenerateChecksum(CodeHackChecksum*, long, unsigned long, unsigned long)
08574dd6 +0x0e6:  lea    -0x28(%ebp),%eax
08574dd9 +0x0e9:  mov    %eax,0x4(%esp)
08574ddd +0x0ed:  mov    0xc(%ebp),%eax
08574de0 +0x0f0:  mov    %eax,(%esp)
08574de3 +0x0f3:  call   0808a7d8 <_ZN18CodeHackChecksumEx21SetCodeHackCheckRangeERK18CodeHackCheckRange>  ; CodeHackChecksumEx::SetCodeHackCheckRange(CodeHackCheckRange const&)
08574de8 +0x0f8:  mov    0xc(%ebp),%eax
08574deb +0x0fb:  lea    -0x48(%ebp),%edx
08574dee +0x0fe:  mov    %edx,0x4(%esp)
08574df2 +0x102:  mov    %eax,(%esp)
08574df5 +0x105:  call   0808a648 <_ZN20CodeHackChecksumData19AddCodeHackChecksumERK16CodeHackChecksum>  ; CodeHackChecksumData::AddCodeHackChecksum(CodeHackChecksum const&)
08574dfa +0x10a:  lea    -0x20(%ebp),%eax
08574dfd +0x10d:  mov    %eax,(%esp)
08574e00 +0x110:  call   0857672a <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x8ee>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x8ee
08574e05 +0x115:  mov    0x8(%ebp),%eax
08574e08 +0x118:  lea    0xc(%eax),%edx
08574e0b +0x11b:  lea    -0x10(%ebp),%eax
08574e0e +0x11e:  mov    %edx,0x4(%esp)
08574e12 +0x122:  mov    %eax,(%esp)
08574e15 +0x125:  call   085766d8 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x89c>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x89c
08574e1a +0x12a:  sub    $0x4,%esp
08574e1d +0x12d:  lea    -0x10(%ebp),%eax
08574e20 +0x130:  mov    %eax,0x4(%esp)
08574e24 +0x134:  lea    -0x20(%ebp),%eax
08574e27 +0x137:  mov    %eax,(%esp)
08574e2a +0x13a:  call   085766fe <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x8c2>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x8c2
08574e2f +0x13f:  test   %al,%al
08574e31 +0x141:  jne    08574d9f <+0xaf>
08574e37 +0x147:  mov    $0x1,%eax
08574e3c +0x14c:  leave
08574e3d +0x14d:  ret
```

## 反编译 C

```c
// WindowsExeFileFamily::GenerateChecksum @ 0x8574cf0

/* WindowsExeFileFamily::GenerateChecksum(CodeHackChecksumEx*, CodeHackCheckRangeEx*) */

undefined4 __thiscall
WindowsExeFileFamily::GenerateChecksum
          (WindowsExeFileFamily *this,CodeHackChecksumEx *param_1,CodeHackCheckRangeEx *param_2)

{
  char cVar1;
  bool bVar2;
  undefined4 *puVar3;
  CodeHackChecksum local_4c [32];
  ulong local_2c;
  ulong local_28;
  __normal_iterator<WindowsExeFile**,std::vector<WindowsExeFile*,std::allocator<WindowsExeFile*>>>
  local_24 [4];
  ulong local_20;
  ulong local_1c;
  long local_18;
  __normal_iterator local_14 [4];
  WindowsExeFile *local_10;
  
  __gnu_cxx::
  __normal_iterator<WindowsExeFile**,std::vector<WindowsExeFile*,std::allocator<WindowsExeFile*>>>::
  __normal_iterator(local_24);
  CodeHackChecksumData::Clear((CodeHackChecksumData *)param_1);
  CodeHackChecksumEx::SetFileName(param_1,(char *)(this + 0x18));
  CodeHackCheckRangeEx::SetFileName(param_2,(char *)(this + 0x18));
  cVar1 = GenerateRange(this,&local_18,&local_1c,&local_20);
  if (cVar1 != '\0') {
    local_2c = local_1c;
    local_28 = local_20;
    *(ulong *)(param_2 + 0x104) = local_1c;
    *(ulong *)(param_2 + 0x108) = local_20;
    std::vector<WindowsExeFile*,std::allocator<WindowsExeFile*>>::begin();
    while( true ) {
      std::vector<WindowsExeFile*,std::allocator<WindowsExeFile*>>::end();
      bVar2 = __gnu_cxx::operator!=(local_24,local_14);
      if (!bVar2) break;
      puVar3 = (undefined4 *)
               __gnu_cxx::
               __normal_iterator<WindowsExeFile**,std::vector<WindowsExeFile*,std::allocator<WindowsExeFile*>>>
               ::operator*(local_24);
      local_10 = (WindowsExeFile *)*puVar3;
      WindowsExeFile::GenerateChecksum(local_10,local_4c,local_18,local_1c,local_20);
      CodeHackChecksumEx::SetCodeHackCheckRange(param_1,(CodeHackCheckRange *)&local_2c);
      CodeHackChecksumData::AddCodeHackChecksum((CodeHackChecksumData *)param_1,local_4c);
      __gnu_cxx::
      __normal_iterator<WindowsExeFile**,std::vector<WindowsExeFile*,std::allocator<WindowsExeFile*>>>
      ::operator++(local_24);
    }
  }
  return 1;
}
```
