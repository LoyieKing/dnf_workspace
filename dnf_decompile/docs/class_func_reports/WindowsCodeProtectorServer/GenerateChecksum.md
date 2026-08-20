# GenerateChecksum

`_ZN26WindowsCodeProtectorServer16GenerateChecksumEP18CodeHackChecksumExP20CodeHackCheckRangeEx`

`WindowsCodeProtectorServer::GenerateChecksum(CodeHackChecksumEx*, CodeHackCheckRangeEx*)`

| 类 | 地址 |
|---|---|
| `WindowsCodeProtectorServer` | `0x08575a3c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08575a3c  _ZN26WindowsCodeProtectorServer16GenerateChecksumEP18CodeHackChecksumExP20CodeHackCheckRangeEx
#           WindowsCodeProtectorServer::GenerateChecksum(CodeHackChecksumEx*, CodeHackCheckRangeEx*)
# range [0x08575a3c, 0x08575c21]
08575a3c +0x000:  push   %ebp
08575a3d +0x001:  mov    %esp,%ebp
08575a3f +0x003:  sub    $0x28,%esp
08575a42 +0x006:  movb   $0x0,-0xa(%ebp)
08575a46 +0x00a:  movb   $0x0,-0x9(%ebp)
08575a4a +0x00e:  mov    0x8(%ebp),%eax
08575a4d +0x011:  movzbl 0x1c(%eax),%eax
08575a51 +0x015:  test   %al,%al
08575a53 +0x017:  je     08575c1b <+0x1df>
08575a59 +0x01d:  mov    0x8(%ebp),%eax
08575a5c +0x020:  mov    (%eax),%eax
08575a5e +0x022:  test   %eax,%eax
08575a60 +0x024:  jne    08575a7b <+0x3f>
08575a62 +0x026:  mov    0x8(%ebp),%eax
08575a65 +0x029:  add    $0x4,%eax
08575a68 +0x02c:  mov    %eax,(%esp)
08575a6b +0x02f:  call   08576ed4 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x1098>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x1098
08575a70 +0x034:  test   %al,%al
08575a72 +0x036:  je     08575a7b <+0x3f>
08575a74 +0x038:  mov    $0x1,%eax
08575a79 +0x03d:  jmp    08575a80 <+0x44>
08575a7b +0x03f:  mov    $0x0,%eax
08575a80 +0x044:  test   %al,%al
08575a82 +0x046:  je     08575a8e <+0x52>
08575a84 +0x048:  mov    $0x0,%eax
08575a89 +0x04d:  jmp    08575c20 <+0x1e4>
08575a8e +0x052:  mov    0x8(%ebp),%eax
08575a91 +0x055:  mov    (%eax),%eax
08575a93 +0x057:  test   %eax,%eax
08575a95 +0x059:  je     08575ab0 <+0x74>
08575a97 +0x05b:  mov    0x8(%ebp),%eax
08575a9a +0x05e:  add    $0x4,%eax
08575a9d +0x061:  mov    %eax,(%esp)
08575aa0 +0x064:  call   08576ed4 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x1098>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x1098
08575aa5 +0x069:  test   %al,%al
08575aa7 +0x06b:  je     08575ab0 <+0x74>
08575aa9 +0x06d:  mov    $0x1,%eax
08575aae +0x072:  jmp    08575ab5 <+0x79>
08575ab0 +0x074:  mov    $0x0,%eax
08575ab5 +0x079:  test   %al,%al
08575ab7 +0x07b:  je     08575ac3 <+0x87>
08575ab9 +0x07d:  movb   $0x1,-0xa(%ebp)
08575abd +0x081:  movb   $0x0,-0x9(%ebp)
08575ac1 +0x085:  jmp    08575b36 <+0xfa>
08575ac3 +0x087:  mov    0x8(%ebp),%eax
08575ac6 +0x08a:  mov    (%eax),%eax
08575ac8 +0x08c:  test   %eax,%eax
08575aca +0x08e:  jne    08575ae8 <+0xac>
08575acc +0x090:  mov    0x8(%ebp),%eax
08575acf +0x093:  add    $0x4,%eax
08575ad2 +0x096:  mov    %eax,(%esp)
08575ad5 +0x099:  call   08576ed4 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x1098>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x1098
08575ada +0x09e:  xor    $0x1,%eax
08575add +0x0a1:  test   %al,%al
08575adf +0x0a3:  je     08575ae8 <+0xac>
08575ae1 +0x0a5:  mov    $0x1,%eax
08575ae6 +0x0aa:  jmp    08575aed <+0xb1>
08575ae8 +0x0ac:  mov    $0x0,%eax
08575aed +0x0b1:  test   %al,%al
08575aef +0x0b3:  je     08575afb <+0xbf>
08575af1 +0x0b5:  movb   $0x0,-0xa(%ebp)
08575af5 +0x0b9:  movb   $0x1,-0x9(%ebp)
08575af9 +0x0bd:  jmp    08575b36 <+0xfa>
08575afb +0x0bf:  mov    0x8(%ebp),%eax
08575afe +0x0c2:  mov    0x14(%eax),%edx
08575b01 +0x0c5:  mov    0x8(%ebp),%eax
08575b04 +0x0c8:  mov    0x10(%eax),%eax
08575b07 +0x0cb:  cmp    %eax,%edx
08575b09 +0x0cd:  jge    08575b24 <+0xe8>
08575b0b +0x0cf:  movb   $0x1,-0xa(%ebp)
08575b0f +0x0d3:  movb   $0x0,-0x9(%ebp)
08575b13 +0x0d7:  mov    0x8(%ebp),%eax
08575b16 +0x0da:  mov    0x14(%eax),%eax
08575b19 +0x0dd:  lea    0x1(%eax),%edx
08575b1c +0x0e0:  mov    0x8(%ebp),%eax
08575b1f +0x0e3:  mov    %edx,0x14(%eax)
08575b22 +0x0e6:  jmp    08575b36 <+0xfa>
08575b24 +0x0e8:  movb   $0x0,-0xa(%ebp)
08575b28 +0x0ec:  movb   $0x1,-0x9(%ebp)
08575b2c +0x0f0:  mov    0x8(%ebp),%eax
08575b2f +0x0f3:  movl   $0x0,0x14(%eax)
08575b36 +0x0fa:  cmpb   $0x0,-0xa(%ebp)
08575b3a +0x0fe:  je     08575b78 <+0x13c>
08575b3c +0x100:  mov    0x8(%ebp),%eax
08575b3f +0x103:  mov    (%eax),%eax
08575b41 +0x105:  mov    0x10(%ebp),%edx
08575b44 +0x108:  mov    %edx,0x8(%esp)
08575b48 +0x10c:  mov    0xc(%ebp),%edx
08575b4b +0x10f:  mov    %edx,0x4(%esp)
08575b4f +0x113:  mov    %eax,(%esp)
08575b52 +0x116:  call   08574cf0 <_ZN20WindowsExeFileFamily16GenerateChecksumEP18CodeHackChecksumExP20CodeHackCheckRangeEx>  ; WindowsExeFileFamily::GenerateChecksum(CodeHackChecksumEx*, CodeHackCheckRangeEx*)
08575b57 +0x11b:  test   %al,%al
08575b59 +0x11d:  je     08575b78 <+0x13c>
08575b5b +0x11f:  movl   $"",0x4(%esp)
08575b63 +0x127:  mov    0x10(%ebp),%eax
08575b66 +0x12a:  mov    %eax,(%esp)
08575b69 +0x12d:  call   0808a9aa <_ZN20CodeHackCheckRangeEx11SetFileNameEPKc>  ; CodeHackCheckRangeEx::SetFileName(char const*)
08575b6e +0x132:  mov    $0x1,%eax
08575b73 +0x137:  jmp    08575c20 <+0x1e4>
08575b78 +0x13c:  cmpb   $0x0,-0x9(%ebp)
08575b7c +0x140:  je     08575c1b <+0x1df>
08575b82 +0x146:  mov    0x8(%ebp),%eax
08575b85 +0x149:  mov    0x18(%eax),%eax
08575b88 +0x14c:  mov    0x8(%ebp),%edx
08575b8b +0x14f:  add    $0x4,%edx
08575b8e +0x152:  mov    %eax,0x4(%esp)
08575b92 +0x156:  mov    %edx,(%esp)
08575b95 +0x159:  call   08576f18 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x10dc>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x10dc
08575b9a +0x15e:  mov    (%eax),%eax
08575b9c +0x160:  mov    0x10(%ebp),%edx
08575b9f +0x163:  mov    %edx,0x8(%esp)
08575ba3 +0x167:  mov    0xc(%ebp),%edx
08575ba6 +0x16a:  mov    %edx,0x4(%esp)
08575baa +0x16e:  mov    %eax,(%esp)
08575bad +0x171:  call   08575302 <_ZN21WindowsDataFileFamily16GenerateChecksumEP18CodeHackChecksumExP20CodeHackCheckRangeEx>  ; WindowsDataFileFamily::GenerateChecksum(CodeHackChecksumEx*, CodeHackCheckRangeEx*)
08575bb2 +0x176:  test   %al,%al
08575bb4 +0x178:  je     08575c1b <+0x1df>
08575bb6 +0x17a:  mov    0x8(%ebp),%eax
08575bb9 +0x17d:  mov    0x18(%eax),%eax
08575bbc +0x180:  mov    0x8(%ebp),%edx
08575bbf +0x183:  add    $0x4,%edx
08575bc2 +0x186:  mov    %eax,0x4(%esp)
08575bc6 +0x18a:  mov    %edx,(%esp)
08575bc9 +0x18d:  call   08576f18 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x10dc>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x10dc
08575bce +0x192:  mov    (%eax),%eax
08575bd0 +0x194:  mov    %eax,(%esp)
08575bd3 +0x197:  call   08575444 <_ZN21WindowsDataFileFamily22IsScanningAddressResetEv>  ; WindowsDataFileFamily::IsScanningAddressReset()
08575bd8 +0x19c:  test   %al,%al
08575bda +0x19e:  je     08575c14 <+0x1d8>
08575bdc +0x1a0:  mov    0x8(%ebp),%eax
08575bdf +0x1a3:  mov    0x18(%eax),%eax
08575be2 +0x1a6:  lea    0x1(%eax),%edx
08575be5 +0x1a9:  mov    0x8(%ebp),%eax
08575be8 +0x1ac:  mov    %edx,0x18(%eax)
08575beb +0x1af:  mov    0x8(%ebp),%eax
08575bee +0x1b2:  add    $0x4,%eax
08575bf1 +0x1b5:  mov    %eax,(%esp)
08575bf4 +0x1b8:  call   08576f2a <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x10ee>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x10ee
08575bf9 +0x1bd:  mov    %eax,%edx
08575bfb +0x1bf:  mov    0x8(%ebp),%eax
08575bfe +0x1c2:  mov    0x18(%eax),%eax
08575c01 +0x1c5:  cmp    %eax,%edx
08575c03 +0x1c7:  setle  %al
08575c06 +0x1ca:  test   %al,%al
08575c08 +0x1cc:  je     08575c14 <+0x1d8>
08575c0a +0x1ce:  mov    0x8(%ebp),%eax
08575c0d +0x1d1:  movl   $0x0,0x18(%eax)
08575c14 +0x1d8:  mov    $0x1,%eax
08575c19 +0x1dd:  jmp    08575c20 <+0x1e4>
08575c1b +0x1df:  mov    $0x0,%eax
08575c20 +0x1e4:  leave
08575c21 +0x1e5:  ret
```

## 反编译 C

```c
// WindowsCodeProtectorServer::GenerateChecksum @ 0x8575a3c

/* WindowsCodeProtectorServer::GenerateChecksum(CodeHackChecksumEx*, CodeHackCheckRangeEx*) */

undefined4 __thiscall
WindowsCodeProtectorServer::GenerateChecksum
          (WindowsCodeProtectorServer *this,CodeHackChecksumEx *param_1,
          CodeHackCheckRangeEx *param_2)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  undefined4 *puVar4;
  int iVar5;
  
  if (this[0x1c] != (WindowsCodeProtectorServer)0x0) {
    if ((*(int *)this == 0) &&
       (cVar3 = std::vector<WindowsDataFileFamily*,std::allocator<WindowsDataFileFamily*>>::empty(),
       cVar3 != '\0')) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      return 0;
    }
    if ((*(int *)this == 0) ||
       (cVar3 = std::vector<WindowsDataFileFamily*,std::allocator<WindowsDataFileFamily*>>::empty(),
       cVar3 == '\0')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      bVar1 = true;
      bVar2 = false;
    }
    else {
      if ((*(int *)this == 0) &&
         (cVar3 = std::vector<WindowsDataFileFamily*,std::allocator<WindowsDataFileFamily*>>::empty
                            (), cVar3 != '\x01')) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (bVar1) {
        bVar1 = false;
        bVar2 = true;
      }
      else if (*(int *)(this + 0x14) < *(int *)(this + 0x10)) {
        bVar1 = true;
        bVar2 = false;
        *(int *)(this + 0x14) = *(int *)(this + 0x14) + 1;
      }
      else {
        bVar1 = false;
        bVar2 = true;
        *(undefined4 *)(this + 0x14) = 0;
      }
    }
    if ((bVar1) &&
       (cVar3 = WindowsExeFileFamily::GenerateChecksum
                          (*(WindowsExeFileFamily **)this,param_1,param_2), cVar3 != '\0')) {
      CodeHackCheckRangeEx::SetFileName(param_2,"");
      return 1;
    }
    if (bVar2) {
      puVar4 = (undefined4 *)
               std::vector<WindowsDataFileFamily*,std::allocator<WindowsDataFileFamily*>>::
               operator[]((vector<WindowsDataFileFamily*,std::allocator<WindowsDataFileFamily*>> *)
                          (this + 4),*(uint *)(this + 0x18));
      cVar3 = WindowsDataFileFamily::GenerateChecksum
                        ((WindowsDataFileFamily *)*puVar4,param_1,param_2);
      if (cVar3 != '\0') {
        puVar4 = (undefined4 *)
                 std::vector<WindowsDataFileFamily*,std::allocator<WindowsDataFileFamily*>>::
                 operator[]((vector<WindowsDataFileFamily*,std::allocator<WindowsDataFileFamily*>> *
                            )(this + 4),*(uint *)(this + 0x18));
        cVar3 = WindowsDataFileFamily::IsScanningAddressReset((WindowsDataFileFamily *)*puVar4);
        if (cVar3 != '\0') {
          *(int *)(this + 0x18) = *(int *)(this + 0x18) + 1;
          iVar5 = std::vector<WindowsDataFileFamily*,std::allocator<WindowsDataFileFamily*>>::size
                            ((vector<WindowsDataFileFamily*,std::allocator<WindowsDataFileFamily*>>
                              *)(this + 4));
          if (iVar5 <= *(int *)(this + 0x18)) {
            *(undefined4 *)(this + 0x18) = 0;
          }
        }
        return 1;
      }
    }
  }
  return 0;
}
```
