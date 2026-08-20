# xsputn_2

`_ZNSt12__basic_fileIcE8xsputn_2EPKciS2_i`

`std::__basic_file<char>::xsputn_2(char const*, int, char const*, int)`

| 类 | 地址 |
|---|---|
| `std::__basic_file<char>` | `0x087228d0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087228d0  _ZNSt12__basic_fileIcE8xsputn_2EPKciS2_i
#           std::__basic_file<char>::xsputn_2(char const*, int, char const*, int)
# range [0x087228d0, 0x0872297f]
087228d0 +0x00:  push   %ebp
087228d1 +0x01:  mov    %esp,%ebp
087228d3 +0x03:  push   %edi
087228d4 +0x04:  push   %esi
087228d5 +0x05:  push   %ebx
087228d6 +0x06:  sub    $0x3c,%esp
087228d9 +0x09:  mov    0x8(%ebp),%eax
087228dc +0x0c:  mov    0x10(%ebp),%esi
087228df +0x0f:  mov    0xc(%ebp),%edi
087228e2 +0x12:  mov    (%eax),%eax
087228e4 +0x14:  mov    %eax,(%esp)
087228e7 +0x17:  call   0807e6d0 <_init+0xfc8>
087228ec +0x1c:  mov    %eax,-0x2c(%ebp)
087228ef +0x1f:  mov    0x18(%ebp),%eax
087228f2 +0x22:  add    %esi,%eax
087228f4 +0x24:  mov    %eax,-0x30(%ebp)
087228f7 +0x27:  mov    0x14(%ebp),%eax
087228fa +0x2a:  mov    -0x30(%ebp),%ebx
087228fd +0x2d:  mov    %eax,-0x20(%ebp)
08722900 +0x30:  mov    0x18(%ebp),%eax
08722903 +0x33:  mov    %eax,-0x1c(%ebp)
08722906 +0x36:  jmp    08722916 <+0x46>
08722908 +0x38:  sub    %eax,%ebx
0872290a +0x3a:  je     08722945 <+0x75>
0872290c +0x3c:  mov    %eax,%edx
0872290e +0x3e:  sub    %esi,%edx
08722910 +0x40:  jns    08722958 <+0x88>
08722912 +0x42:  add    %eax,%edi
08722914 +0x44:  sub    %eax,%esi
08722916 +0x46:  lea    -0x28(%ebp),%eax
08722919 +0x49:  mov    %eax,0x4(%esp)
0872291d +0x4d:  mov    -0x2c(%ebp),%eax
08722920 +0x50:  mov    %edi,-0x28(%ebp)
08722923 +0x53:  mov    %esi,-0x24(%ebp)
08722926 +0x56:  movl   $0x2,0x8(%esp)
0872292e +0x5e:  mov    %eax,(%esp)
08722931 +0x61:  call   0807de00 <_init+0x6f8>
08722936 +0x66:  cmp    $0xffffffff,%eax
08722939 +0x69:  jne    08722908 <+0x38>
0872293b +0x6b:  call   0807dd70 <_init+0x668>
08722940 +0x70:  cmpl   $0x4,(%eax)
08722943 +0x73:  je     08722916 <+0x46>
08722945 +0x75:  mov    -0x30(%ebp),%eax
08722948 +0x78:  add    $0x3c,%esp
0872294b +0x7b:  sub    %ebx,%eax
0872294d +0x7d:  pop    %ebx
0872294e +0x7e:  pop    %esi
0872294f +0x7f:  pop    %edi
08722950 +0x80:  pop    %ebp
08722951 +0x81:  ret
08722952 +0x82:  lea    0x0(%esi),%esi
08722958 +0x88:  mov    0x18(%ebp),%ecx
0872295b +0x8b:  mov    -0x2c(%ebp),%eax
0872295e +0x8e:  sub    %edx,%ecx
08722960 +0x90:  add    0x14(%ebp),%edx
08722963 +0x93:  call   08722640 <_ZN12_GLOBAL__N_1L6xwriteEiPKci>  ; (anonymous namespace)::xwrite(int, char const*, int)
08722968 +0x98:  sub    %eax,%ebx
0872296a +0x9a:  mov    -0x30(%ebp),%eax
0872296d +0x9d:  add    $0x3c,%esp
08722970 +0xa0:  sub    %ebx,%eax
08722972 +0xa2:  pop    %ebx
08722973 +0xa3:  pop    %esi
08722974 +0xa4:  pop    %edi
08722975 +0xa5:  pop    %ebp
08722976 +0xa6:  ret
08722977 +0xa7:  nop
08722978 +0xa8:  nop
08722979 +0xa9:  nop
0872297a +0xaa:  nop
0872297b +0xab:  nop
0872297c +0xac:  nop
0872297d +0xad:  nop
0872297e +0xae:  nop
0872297f +0xaf:  nop
```

## 反编译 C

```c
// std::__basic_file<char>::xsputn_2 @ 0x87228d0

/* std::__basic_file<char>::xsputn_2(char const*, int, char const*, int) */

int __thiscall
std::__basic_file<char>::xsputn_2
          (__basic_file<char> *this,char *param_1,int param_2,char *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  ssize_t sVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  iovec local_2c;
  char *local_24;
  int local_20;
  
  iVar1 = fileno((FILE *)this->_M_cfile);
  iVar2 = param_4 + param_2;
  local_24 = param_3;
  local_20 = param_4;
  iVar6 = iVar2;
  do {
    while( true ) {
      local_2c.iov_base = param_1;
      local_2c.iov_len = param_2;
      sVar3 = writev(iVar1,&local_2c,2);
      if (sVar3 == -1) break;
      iVar6 = iVar6 - sVar3;
      if (iVar6 == 0) goto LAB_08722945;
      iVar5 = sVar3 - param_2;
      if (-1 < iVar5) {
        iVar1 = ::(anonymous_namespace)::xwrite(iVar1,param_3 + iVar5,param_4 - iVar5);
        return iVar2 - (iVar6 - iVar1);
      }
      param_1 = param_1 + sVar3;
      param_2 = param_2 - sVar3;
    }
    piVar4 = __errno_location();
  } while (*piVar4 == 4);
LAB_08722945:
  return iVar2 - iVar6;
}
```
