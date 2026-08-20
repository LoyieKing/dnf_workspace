# IsRightChecksum

`_ZN18CodeHackChecksumEx15IsRightChecksumEPK16CodeHackChecksum`

`CodeHackChecksumEx::IsRightChecksum(CodeHackChecksum const*)`

| 类 | 地址 |
|---|---|
| `CodeHackChecksumEx` | `0x0808a8c8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0808a8c8  _ZN18CodeHackChecksumEx15IsRightChecksumEPK16CodeHackChecksum
#           CodeHackChecksumEx::IsRightChecksum(CodeHackChecksum const*)
# range [0x0808a8c8, 0x0808a965]
0808a8c8 +0x00:  push   %ebp
0808a8c9 +0x01:  mov    %esp,%ebp
0808a8cb +0x03:  sub    $0x38,%esp
0808a8ce +0x06:  lea    -0x14(%ebp),%eax
0808a8d1 +0x09:  mov    %eax,(%esp)
0808a8d4 +0x0c:  call   0808af00 <_GLOBAL__I__Z18ZeroMemoryChecksumP16CodeHackChecksum+0x299>  ; global constructors keyed to ZeroMemoryChecksum(CodeHackChecksum*)+0x299
0808a8d9 +0x11:  mov    0x8(%ebp),%edx
0808a8dc +0x14:  lea    -0x1c(%ebp),%eax
0808a8df +0x17:  mov    %edx,0x4(%esp)
0808a8e3 +0x1b:  mov    %eax,(%esp)
0808a8e6 +0x1e:  call   0808af0e <_GLOBAL__I__Z18ZeroMemoryChecksumP16CodeHackChecksum+0x2a7>  ; global constructors keyed to ZeroMemoryChecksum(CodeHackChecksum*)+0x2a7
0808a8eb +0x23:  sub    $0x4,%esp
0808a8ee +0x26:  mov    -0x1c(%ebp),%eax
0808a8f1 +0x29:  mov    %eax,-0x14(%ebp)
0808a8f4 +0x2c:  jmp    0808a934 <+0x6c>
0808a8f6 +0x2e:  lea    -0x14(%ebp),%eax
0808a8f9 +0x31:  mov    %eax,(%esp)
0808a8fc +0x34:  call   0808af9a <_GLOBAL__I__Z18ZeroMemoryChecksumP16CodeHackChecksum+0x333>  ; global constructors keyed to ZeroMemoryChecksum(CodeHackChecksum*)+0x333
0808a901 +0x39:  mov    %eax,-0xc(%ebp)
0808a904 +0x3c:  mov    0xc(%ebp),%edx
0808a907 +0x3f:  mov    -0xc(%ebp),%eax
0808a90a +0x42:  movl   $0x20,0x8(%esp)
0808a912 +0x4a:  mov    %edx,0x4(%esp)
0808a916 +0x4e:  mov    %eax,(%esp)
0808a919 +0x51:  call   0807dc90 <_init+0x588>
0808a91e +0x56:  test   %eax,%eax
0808a920 +0x58:  jne    0808a929 <+0x61>
0808a922 +0x5a:  mov    $0x1,%eax
0808a927 +0x5f:  jmp    0808a964 <+0x9c>
0808a929 +0x61:  lea    -0x14(%ebp),%eax
0808a92c +0x64:  mov    %eax,(%esp)
0808a92f +0x67:  call   0808af84 <_GLOBAL__I__Z18ZeroMemoryChecksumP16CodeHackChecksum+0x31d>  ; global constructors keyed to ZeroMemoryChecksum(CodeHackChecksum*)+0x31d
0808a934 +0x6c:  mov    0x8(%ebp),%edx
0808a937 +0x6f:  lea    -0x10(%ebp),%eax
0808a93a +0x72:  mov    %edx,0x4(%esp)
0808a93e +0x76:  mov    %eax,(%esp)
0808a941 +0x79:  call   0808af32 <_GLOBAL__I__Z18ZeroMemoryChecksumP16CodeHackChecksum+0x2cb>  ; global constructors keyed to ZeroMemoryChecksum(CodeHackChecksum*)+0x2cb
0808a946 +0x7e:  sub    $0x4,%esp
0808a949 +0x81:  lea    -0x10(%ebp),%eax
0808a94c +0x84:  mov    %eax,0x4(%esp)
0808a950 +0x88:  lea    -0x14(%ebp),%eax
0808a953 +0x8b:  mov    %eax,(%esp)
0808a956 +0x8e:  call   0808af58 <_GLOBAL__I__Z18ZeroMemoryChecksumP16CodeHackChecksum+0x2f1>  ; global constructors keyed to ZeroMemoryChecksum(CodeHackChecksum*)+0x2f1
0808a95b +0x93:  test   %al,%al
0808a95d +0x95:  jne    0808a8f6 <+0x2e>
0808a95f +0x97:  mov    $0x0,%eax
0808a964 +0x9c:  leave
0808a965 +0x9d:  ret
```

## 反编译 C

```c
// CodeHackChecksumEx::IsRightChecksum @ 0x808a8c8

/* CodeHackChecksumEx::IsRightChecksum(CodeHackChecksum const*) */

undefined4 __thiscall
CodeHackChecksumEx::IsRightChecksum(CodeHackChecksumEx *this,CodeHackChecksum *param_1)

{
  bool bVar1;
  int iVar2;
  __normal_iterator<CodeHackChecksum*,std::vector<CodeHackChecksum,std::allocator<CodeHackChecksum>>>
  local_18 [4];
  __normal_iterator local_14 [4];
  void *local_10;
  
  __gnu_cxx::
  __normal_iterator<CodeHackChecksum*,std::vector<CodeHackChecksum,std::allocator<CodeHackChecksum>>>
  ::__normal_iterator(local_18);
  std::vector<CodeHackChecksum,std::allocator<CodeHackChecksum>>::begin();
  while( true ) {
    std::vector<CodeHackChecksum,std::allocator<CodeHackChecksum>>::end();
    bVar1 = __gnu_cxx::operator!=(local_18,local_14);
    if (!bVar1) {
      return 0;
    }
    local_10 = (void *)__gnu_cxx::
                       __normal_iterator<CodeHackChecksum*,std::vector<CodeHackChecksum,std::allocator<CodeHackChecksum>>>
                       ::operator*(local_18);
    iVar2 = memcmp(local_10,param_1,0x20);
    if (iVar2 == 0) break;
    __gnu_cxx::
    __normal_iterator<CodeHackChecksum*,std::vector<CodeHackChecksum,std::allocator<CodeHackChecksum>>>
    ::operator++(local_18);
  }
  return 1;
}
```
