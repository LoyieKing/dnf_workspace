# GenerateChecksum

`_ZN21WindowsDataFileFamily16GenerateChecksumEP18CodeHackChecksumExP20CodeHackCheckRangeEx`

`WindowsDataFileFamily::GenerateChecksum(CodeHackChecksumEx*, CodeHackCheckRangeEx*)`

| 类 | 地址 |
|---|---|
| `WindowsDataFileFamily` | `0x08575302` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08575302  _ZN21WindowsDataFileFamily16GenerateChecksumEP18CodeHackChecksumExP20CodeHackCheckRangeEx
#           WindowsDataFileFamily::GenerateChecksum(CodeHackChecksumEx*, CodeHackCheckRangeEx*)
# range [0x08575302, 0x08575443]
08575302 +0x000:  push   %ebp
08575303 +0x001:  mov    %esp,%ebp
08575305 +0x003:  sub    $0x68,%esp
08575308 +0x006:  lea    -0x1c(%ebp),%eax
0857530b +0x009:  mov    %eax,(%esp)
0857530e +0x00c:  call   08576bb6 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0xd7a>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0xd7a
08575313 +0x011:  mov    0xc(%ebp),%eax
08575316 +0x014:  mov    %eax,(%esp)
08575319 +0x017:  call   0808a61a <_ZN20CodeHackChecksumData5ClearEv>  ; CodeHackChecksumData::Clear()
0857531e +0x01c:  mov    0x8(%ebp),%eax
08575321 +0x01f:  add    $0xc,%eax
08575324 +0x022:  mov    %eax,0x4(%esp)
08575328 +0x026:  mov    0xc(%ebp),%eax
0857532b +0x029:  mov    %eax,(%esp)
0857532e +0x02c:  call   0808a7ae <_ZN18CodeHackChecksumEx11SetFileNameEPKc>  ; CodeHackChecksumEx::SetFileName(char const*)
08575333 +0x031:  mov    0x8(%ebp),%eax
08575336 +0x034:  add    $0xc,%eax
08575339 +0x037:  mov    %eax,0x4(%esp)
0857533d +0x03b:  mov    0x10(%ebp),%eax
08575340 +0x03e:  mov    %eax,(%esp)
08575343 +0x041:  call   0808a9aa <_ZN20CodeHackCheckRangeEx11SetFileNameEPKc>  ; CodeHackCheckRangeEx::SetFileName(char const*)
08575348 +0x046:  lea    -0x18(%ebp),%eax
0857534b +0x049:  mov    %eax,0x8(%esp)
0857534f +0x04d:  lea    -0x14(%ebp),%eax
08575352 +0x050:  mov    %eax,0x4(%esp)
08575356 +0x054:  mov    0x8(%ebp),%eax
08575359 +0x057:  mov    %eax,(%esp)
0857535c +0x05a:  call   08575230 <_ZN21WindowsDataFileFamily13GenerateRangeEPmS0_>  ; WindowsDataFileFamily::GenerateRange(unsigned long*, unsigned long*)
08575361 +0x05f:  test   %al,%al
08575363 +0x061:  je     0857543c <+0x13a>
08575369 +0x067:  mov    -0x14(%ebp),%eax
0857536c +0x06a:  mov    %eax,-0x24(%ebp)
0857536f +0x06d:  mov    -0x18(%ebp),%eax
08575372 +0x070:  mov    %eax,-0x20(%ebp)
08575375 +0x073:  mov    0x10(%ebp),%ecx
08575378 +0x076:  mov    -0x24(%ebp),%eax
0857537b +0x079:  mov    -0x20(%ebp),%edx
0857537e +0x07c:  mov    %eax,0x104(%ecx)
08575384 +0x082:  mov    %edx,0x108(%ecx)
0857538a +0x088:  mov    0x8(%ebp),%edx
0857538d +0x08b:  lea    -0x4c(%ebp),%eax
08575390 +0x08e:  mov    %edx,0x4(%esp)
08575394 +0x092:  mov    %eax,(%esp)
08575397 +0x095:  call   08576bc4 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0xd88>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0xd88
0857539c +0x09a:  sub    $0x4,%esp
0857539f +0x09d:  mov    -0x4c(%ebp),%eax
085753a2 +0x0a0:  mov    %eax,-0x1c(%ebp)
085753a5 +0x0a3:  jmp    08575406 <+0x104>
085753a7 +0x0a5:  lea    -0x1c(%ebp),%eax
085753aa +0x0a8:  mov    %eax,(%esp)
085753ad +0x0ab:  call   08576c50 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0xe14>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0xe14
085753b2 +0x0b0:  mov    (%eax),%eax
085753b4 +0x0b2:  mov    %eax,-0xc(%ebp)
085753b7 +0x0b5:  mov    -0x18(%ebp),%edx
085753ba +0x0b8:  mov    -0x14(%ebp),%eax
085753bd +0x0bb:  mov    %edx,0xc(%esp)
085753c1 +0x0bf:  mov    %eax,0x8(%esp)
085753c5 +0x0c3:  lea    -0x44(%ebp),%eax
085753c8 +0x0c6:  mov    %eax,0x4(%esp)
085753cc +0x0ca:  mov    -0xc(%ebp),%eax
085753cf +0x0cd:  mov    %eax,(%esp)
085753d2 +0x0d0:  call   08574eba <_ZN15WindowsDataFile16GenerateChecksumEP16CodeHackChecksummm>  ; WindowsDataFile::GenerateChecksum(CodeHackChecksum*, unsigned long, unsigned long)
085753d7 +0x0d5:  lea    -0x24(%ebp),%eax
085753da +0x0d8:  mov    %eax,0x4(%esp)
085753de +0x0dc:  mov    0xc(%ebp),%eax
085753e1 +0x0df:  mov    %eax,(%esp)
085753e4 +0x0e2:  call   0808a7d8 <_ZN18CodeHackChecksumEx21SetCodeHackCheckRangeERK18CodeHackCheckRange>  ; CodeHackChecksumEx::SetCodeHackCheckRange(CodeHackCheckRange const&)
085753e9 +0x0e7:  mov    0xc(%ebp),%eax
085753ec +0x0ea:  lea    -0x44(%ebp),%edx
085753ef +0x0ed:  mov    %edx,0x4(%esp)
085753f3 +0x0f1:  mov    %eax,(%esp)
085753f6 +0x0f4:  call   0808a648 <_ZN20CodeHackChecksumData19AddCodeHackChecksumERK16CodeHackChecksum>  ; CodeHackChecksumData::AddCodeHackChecksum(CodeHackChecksum const&)
085753fb +0x0f9:  lea    -0x1c(%ebp),%eax
085753fe +0x0fc:  mov    %eax,(%esp)
08575401 +0x0ff:  call   08576c3a <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0xdfe>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0xdfe
08575406 +0x104:  mov    0x8(%ebp),%edx
08575409 +0x107:  lea    -0x10(%ebp),%eax
0857540c +0x10a:  mov    %edx,0x4(%esp)
08575410 +0x10e:  mov    %eax,(%esp)
08575413 +0x111:  call   08576be8 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0xdac>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0xdac
08575418 +0x116:  sub    $0x4,%esp
0857541b +0x119:  lea    -0x10(%ebp),%eax
0857541e +0x11c:  mov    %eax,0x4(%esp)
08575422 +0x120:  lea    -0x1c(%ebp),%eax
08575425 +0x123:  mov    %eax,(%esp)
08575428 +0x126:  call   08576c0e <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0xdd2>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0xdd2
0857542d +0x12b:  test   %al,%al
0857542f +0x12d:  jne    085753a7 <+0xa5>
08575435 +0x133:  mov    $0x1,%eax
0857543a +0x138:  jmp    08575441 <+0x13f>
0857543c +0x13a:  mov    $0x0,%eax
08575441 +0x13f:  leave
08575442 +0x140:  ret
08575443 +0x141:  nop
```

## 反编译 C

```c
// WindowsDataFileFamily::GenerateChecksum @ 0x8575302

/* WindowsDataFileFamily::GenerateChecksum(CodeHackChecksumEx*, CodeHackCheckRangeEx*) */

undefined4 __thiscall
WindowsDataFileFamily::GenerateChecksum
          (WindowsDataFileFamily *this,CodeHackChecksumEx *param_1,CodeHackCheckRangeEx *param_2)

{
  char cVar1;
  bool bVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  CodeHackChecksum local_48 [32];
  ulong local_28;
  ulong local_24;
  __normal_iterator<WindowsDataFile**,std::vector<WindowsDataFile*,std::allocator<WindowsDataFile*>>>
  local_20 [4];
  ulong local_1c;
  ulong local_18;
  __normal_iterator local_14 [4];
  WindowsDataFile *local_10;
  
  __gnu_cxx::
  __normal_iterator<WindowsDataFile**,std::vector<WindowsDataFile*,std::allocator<WindowsDataFile*>>>
  ::__normal_iterator(local_20);
  CodeHackChecksumData::Clear((CodeHackChecksumData *)param_1);
  CodeHackChecksumEx::SetFileName(param_1,(char *)(this + 0xc));
  CodeHackCheckRangeEx::SetFileName(param_2,(char *)(this + 0xc));
  cVar1 = GenerateRange(this,&local_18,&local_1c);
  if (cVar1 == '\0') {
    uVar4 = 0;
  }
  else {
    local_28 = local_18;
    local_24 = local_1c;
    *(ulong *)(param_2 + 0x104) = local_18;
    *(ulong *)(param_2 + 0x108) = local_1c;
    std::vector<WindowsDataFile*,std::allocator<WindowsDataFile*>>::begin();
    while( true ) {
      std::vector<WindowsDataFile*,std::allocator<WindowsDataFile*>>::end();
      bVar2 = __gnu_cxx::operator!=(local_20,local_14);
      if (!bVar2) break;
      puVar3 = (undefined4 *)
               __gnu_cxx::
               __normal_iterator<WindowsDataFile**,std::vector<WindowsDataFile*,std::allocator<WindowsDataFile*>>>
               ::operator*(local_20);
      local_10 = (WindowsDataFile *)*puVar3;
      WindowsDataFile::GenerateChecksum(local_10,local_48,local_18,local_1c);
      CodeHackChecksumEx::SetCodeHackCheckRange(param_1,(CodeHackCheckRange *)&local_28);
      CodeHackChecksumData::AddCodeHackChecksum((CodeHackChecksumData *)param_1,local_48);
      __gnu_cxx::
      __normal_iterator<WindowsDataFile**,std::vector<WindowsDataFile*,std::allocator<WindowsDataFile*>>>
      ::operator++(local_20);
    }
    uVar4 = 1;
  }
  return uVar4;
}
```
