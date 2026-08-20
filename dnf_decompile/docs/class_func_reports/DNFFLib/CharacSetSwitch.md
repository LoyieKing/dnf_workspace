# CharacSetSwitch

`_ZN7DNFFLib15CharacSetSwitchEPKcS1_PcS2_`

`DNFFLib::CharacSetSwitch(char const*, char const*, char*, char*)`

| 类 | 地址 |
|---|---|
| `DNFFLib` | `0x08108bfb` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08108bfb  _ZN7DNFFLib15CharacSetSwitchEPKcS1_PcS2_
#           DNFFLib::CharacSetSwitch(char const*, char const*, char*, char*)
# range [0x08108bfb, 0x08108d0d]
08108bfb +0x000:  push   %ebp
08108bfc +0x001:  mov    %esp,%ebp
08108bfe +0x003:  sub    $0x48,%esp
08108c01 +0x006:  movl   $0x0,-0x18(%ebp)
08108c08 +0x00d:  movl   $0x0,-0x1c(%ebp)
08108c0f +0x014:  movl   $0x0,-0x20(%ebp)
08108c16 +0x01b:  movl   $0x0,-0x24(%ebp)
08108c1d +0x022:  movl   $0x0,-0x14(%ebp)
08108c24 +0x029:  mov    0x8(%ebp),%eax
08108c27 +0x02c:  mov    %eax,0x4(%esp)
08108c2b +0x030:  mov    0xc(%ebp),%eax
08108c2e +0x033:  mov    %eax,(%esp)
08108c31 +0x036:  call   0807d990 <_init+0x288>
08108c36 +0x03b:  mov    %eax,-0xc(%ebp)
08108c39 +0x03e:  cmpl   $0xffffffff,-0xc(%ebp)
08108c3d +0x042:  jne    08108c68 <+0x6d>
08108c3f +0x044:  call   0807dd70 <_init+0x668>
08108c44 +0x049:  mov    (%eax),%eax
08108c46 +0x04b:  mov    %eax,(%esp)
08108c49 +0x04e:  call   0807d730 <_init+0x28>
08108c4e +0x053:  mov    %eax,0x4(%esp)
08108c52 +0x057:  movl   $"iconv_open error : %s\n",(%esp)
08108c59 +0x05e:  call   0807db60 <_init+0x458>
08108c5e +0x063:  mov    $0x0,%eax
08108c63 +0x068:  jmp    08108d0c <+0x111>
08108c68 +0x06d:  mov    0x10(%ebp),%eax
08108c6b +0x070:  mov    %eax,-0x18(%ebp)
08108c6e +0x073:  mov    0x14(%ebp),%eax
08108c71 +0x076:  mov    %eax,-0x1c(%ebp)
08108c74 +0x079:  mov    -0x18(%ebp),%eax
08108c77 +0x07c:  mov    %eax,(%esp)
08108c7a +0x07f:  call   0807e3b0 <_init+0xca8>
08108c7f +0x084:  mov    %eax,-0x20(%ebp)
08108c82 +0x087:  mov    -0x20(%ebp),%edx
08108c85 +0x08a:  mov    %edx,%eax
08108c87 +0x08c:  add    %eax,%eax
08108c89 +0x08e:  add    %edx,%eax
08108c8b +0x090:  mov    %eax,-0x24(%ebp)
08108c8e +0x093:  mov    -0x24(%ebp),%eax
08108c91 +0x096:  mov    %eax,-0x14(%ebp)
08108c94 +0x099:  lea    -0x24(%ebp),%eax
08108c97 +0x09c:  mov    %eax,0x10(%esp)
08108c9b +0x0a0:  lea    -0x1c(%ebp),%eax
08108c9e +0x0a3:  mov    %eax,0xc(%esp)
08108ca2 +0x0a7:  lea    -0x20(%ebp),%eax
08108ca5 +0x0aa:  mov    %eax,0x8(%esp)
08108ca9 +0x0ae:  lea    -0x18(%ebp),%eax
08108cac +0x0b1:  mov    %eax,0x4(%esp)
08108cb0 +0x0b5:  mov    -0xc(%ebp),%eax
08108cb3 +0x0b8:  mov    %eax,(%esp)
08108cb6 +0x0bb:  call   0807e0e0 <_init+0x9d8>
08108cbb +0x0c0:  mov    %eax,-0x10(%ebp)
08108cbe +0x0c3:  cmpl   $0xffffffff,-0x10(%ebp)
08108cc2 +0x0c7:  jne    08108cea <+0xef>
08108cc4 +0x0c9:  call   0807dd70 <_init+0x668>
08108cc9 +0x0ce:  mov    (%eax),%eax
08108ccb +0x0d0:  mov    %eax,(%esp)
08108cce +0x0d3:  call   0807d730 <_init+0x28>
08108cd3 +0x0d8:  mov    %eax,0x4(%esp)
08108cd7 +0x0dc:  movl   $"iconv error : %s\n",(%esp)
08108cde +0x0e3:  call   0807db60 <_init+0x458>
08108ce3 +0x0e8:  mov    $0x0,%eax
08108ce8 +0x0ed:  jmp    08108d0c <+0x111>
08108cea +0x0ef:  mov    -0x24(%ebp),%eax
08108ced +0x0f2:  mov    -0x14(%ebp),%edx
08108cf0 +0x0f5:  mov    %edx,%ecx
08108cf2 +0x0f7:  sub    %eax,%ecx
08108cf4 +0x0f9:  mov    %ecx,%eax
08108cf6 +0x0fb:  add    0x14(%ebp),%eax
08108cf9 +0x0fe:  movb   $0x0,(%eax)
08108cfc +0x101:  mov    -0xc(%ebp),%eax
08108cff +0x104:  mov    %eax,(%esp)
08108d02 +0x107:  call   0807e4a0 <_init+0xd98>
08108d07 +0x10c:  mov    $0x1,%eax
08108d0c +0x111:  leave
08108d0d +0x112:  ret
```

## 反编译 C

```c
// DNFFLib::CharacSetSwitch @ 0x8108bfb

/* DNFFLib::CharacSetSwitch(char const*, char const*, char*, char*) */

undefined4 DNFFLib::CharacSetSwitch(char *param_1,char *param_2,char *param_3,char *param_4)

{
  int *piVar1;
  char *pcVar2;
  undefined4 uVar3;
  size_t local_28;
  size_t local_24;
  char *local_20;
  char *local_1c;
  size_t local_18;
  size_t local_14;
  iconv_t local_10;
  
  local_1c = (char *)0x0;
  local_20 = (char *)0x0;
  local_24 = 0;
  local_28 = 0;
  local_18 = 0;
  local_10 = iconv_open(param_2,param_1);
  if (local_10 == (iconv_t)0xffffffff) {
    piVar1 = __errno_location();
    pcVar2 = strerror(*piVar1);
    printf("iconv_open error : %s\n",pcVar2);
    uVar3 = 0;
  }
  else {
    local_1c = param_3;
    local_20 = param_4;
    local_24 = strlen(param_3);
    local_28 = local_24 * 3;
    local_18 = local_28;
    local_14 = iconv(local_10,&local_1c,&local_24,&local_20,&local_28);
    if (local_14 == 0xffffffff) {
      piVar1 = __errno_location();
      pcVar2 = strerror(*piVar1);
      printf("iconv error : %s\n",pcVar2);
      uVar3 = 0;
    }
    else {
      param_4[local_18 - local_28] = '\0';
      iconv_close(local_10);
      uVar3 = 1;
    }
  }
  return uVar3;
}
```
