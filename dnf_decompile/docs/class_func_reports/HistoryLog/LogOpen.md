# LogOpen

`_ZN10HistoryLog7LogOpenEj`

`HistoryLog::LogOpen(unsigned int)`

| 类 | 地址 |
|---|---|
| `HistoryLog` | `0x084b9b32` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084b9b32  _ZN10HistoryLog7LogOpenEj
#           HistoryLog::LogOpen(unsigned int)
# range [0x084b9b32, 0x084b9d05]
084b9b32 +0x000:  push   %ebp
084b9b33 +0x001:  mov    %esp,%ebp
084b9b35 +0x003:  push   %edi
084b9b36 +0x004:  push   %ebx
084b9b37 +0x005:  sub    $0x130,%esp
084b9b3d +0x00b:  call   0807dca0 <_init+0x598>
084b9b42 +0x010:  mov    %eax,%ecx
084b9b44 +0x012:  mov    $0x51eb851f,%edx
084b9b49 +0x017:  mov    %ecx,%eax
084b9b4b +0x019:  imul   %edx
084b9b4d +0x01b:  sar    $0x5,%edx
084b9b50 +0x01e:  mov    %ecx,%eax
084b9b52 +0x020:  sar    $0x1f,%eax
084b9b55 +0x023:  mov    %edx,%ebx
084b9b57 +0x025:  sub    %eax,%ebx
084b9b59 +0x027:  mov    %ebx,%eax
084b9b5b +0x029:  mov    %eax,-0x10(%ebp)
084b9b5e +0x02c:  mov    -0x10(%ebp),%eax
084b9b61 +0x02f:  imul   $0x64,%eax,%eax
084b9b64 +0x032:  mov    %ecx,%edi
084b9b66 +0x034:  sub    %eax,%edi
084b9b68 +0x036:  mov    %edi,%eax
084b9b6a +0x038:  mov    %eax,-0x10(%ebp)
084b9b6d +0x03b:  cmpl   $0x5f,-0x10(%ebp)
084b9b71 +0x03f:  jle    084b9cf6 <+0x1c4>
084b9b77 +0x045:  movl   $&_ZN10HistoryLog9logfiles_E,(%esp)
084b9b7e +0x04c:  call   084ba466 <_GLOBAL__I__ZN10HistoryLog9logfiles_E+0x17d>  ; global constructors keyed to HistoryLog::logfiles_+0x17d
084b9b83 +0x051:  mov    %eax,-0xc(%ebp)
084b9b86 +0x054:  cmpl   $0x0,-0xc(%ebp)
084b9b8a +0x058:  jne    084b9b96 <+0x64>
084b9b8c +0x05a:  mov    $0x0,%eax
084b9b91 +0x05f:  jmp    084b9cfb <+0x1c9>
084b9b96 +0x064:  movl   $0x0,-0x1a(%ebp)
084b9b9d +0x06b:  movl   $0x0,-0x16(%ebp)
084b9ba4 +0x072:  movw   $0x0,-0x12(%ebp)
084b9baa +0x078:  movl   $0x0,0x8(%esp)
084b9bb2 +0x080:  movl   $0xa,0x4(%esp)
084b9bba +0x088:  lea    -0x1a(%ebp),%eax
084b9bbd +0x08b:  mov    %eax,(%esp)
084b9bc0 +0x08e:  call   086b19b9 <_Z12get_str_datePcic>  ; get_str_date(char*, int, char)
084b9bc5 +0x093:  lea    -0x4c(%ebp),%edx
084b9bc8 +0x096:  mov    $0x0,%eax
084b9bcd +0x09b:  mov    $0xc,%ecx
084b9bd2 +0x0a0:  mov    %edx,%edi
084b9bd4 +0x0a2:  rep stos %eax,%es:(%edi)
084b9bd6 +0x0a4:  mov    %edi,%edx
084b9bd8 +0x0a6:  mov    %ax,(%edx)
084b9bdb +0x0a9:  add    $0x2,%edx
084b9bde +0x0ac:  lea    -0x1a(%ebp),%eax
084b9be1 +0x0af:  mov    %eax,0xc(%esp)
084b9be5 +0x0b3:  movl   $"./history/",0x8(%esp)
084b9bed +0x0bb:  movl   $"%s%s/",0x4(%esp)
084b9bf5 +0x0c3:  lea    -0x4c(%ebp),%eax
084b9bf8 +0x0c6:  mov    %eax,(%esp)
084b9bfb +0x0c9:  call   0807e440 <_init+0xd38>
084b9c00 +0x0ce:  lea    -0xa4(%ebp),%eax
084b9c06 +0x0d4:  mov    %eax,0x4(%esp)
084b9c0a +0x0d8:  lea    -0x4c(%ebp),%eax
084b9c0d +0x0db:  mov    %eax,(%esp)
084b9c10 +0x0de:  call   08106b9a <_GLOBAL__I__ZN15CmmChannelProxyC2ESsi+0x1c>  ; global constructors keyed to CmmChannelProxy::CmmChannelProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int)+0x1c
084b9c15 +0x0e3:  shr    $0x1f,%eax
084b9c18 +0x0e6:  test   %al,%al
084b9c1a +0x0e8:  je     084b9c2f <+0xfd>
084b9c1c +0x0ea:  movl   $0x1fd,0x4(%esp)
084b9c24 +0x0f2:  lea    -0x4c(%ebp),%eax
084b9c27 +0x0f5:  mov    %eax,(%esp)
084b9c2a +0x0f8:  call   0807d800 <_init+0xf8>
084b9c2f +0x0fd:  lea    -0x123(%ebp),%edx
084b9c35 +0x103:  mov    $0x7f,%ebx
084b9c3a +0x108:  mov    $0x0,%eax
084b9c3f +0x10d:  mov    %edx,%ecx
084b9c41 +0x10f:  and    $0x1,%ecx
084b9c44 +0x112:  test   %ecx,%ecx
084b9c46 +0x114:  je     084b9c50 <+0x11e>
084b9c48 +0x116:  mov    %al,(%edx)
084b9c4a +0x118:  add    $0x1,%edx
084b9c4d +0x11b:  sub    $0x1,%ebx
084b9c50 +0x11e:  mov    %edx,%ecx
084b9c52 +0x120:  and    $0x2,%ecx
084b9c55 +0x123:  test   %ecx,%ecx
084b9c57 +0x125:  je     084b9c62 <+0x130>
084b9c59 +0x127:  mov    %ax,(%edx)
084b9c5c +0x12a:  add    $0x2,%edx
084b9c5f +0x12d:  sub    $0x2,%ebx
084b9c62 +0x130:  mov    %ebx,%ecx
084b9c64 +0x132:  shr    $0x2,%ecx
084b9c67 +0x135:  mov    %edx,%edi
084b9c69 +0x137:  rep stos %eax,%es:(%edi)
084b9c6b +0x139:  mov    %edi,%edx
084b9c6d +0x13b:  mov    %ebx,%ecx
084b9c6f +0x13d:  and    $0x2,%ecx
084b9c72 +0x140:  test   %ecx,%ecx
084b9c74 +0x142:  je     084b9c7c <+0x14a>
084b9c76 +0x144:  mov    %ax,(%edx)
084b9c79 +0x147:  add    $0x2,%edx
084b9c7c +0x14a:  mov    %ebx,%ecx
084b9c7e +0x14c:  and    $0x1,%ecx
084b9c81 +0x14f:  test   %ecx,%ecx
084b9c83 +0x151:  je     084b9c8a <+0x158>
084b9c85 +0x153:  mov    %al,(%edx)
084b9c87 +0x155:  add    $0x1,%edx
084b9c8a +0x158:  movl   $0x0,0x4(%esp)
084b9c92 +0x160:  mov    0x8(%ebp),%eax
084b9c95 +0x163:  mov    %eax,(%esp)
084b9c98 +0x166:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
084b9c9d +0x16b:  mov    %eax,0xc(%esp)
084b9ca1 +0x16f:  lea    -0x4c(%ebp),%eax
084b9ca4 +0x172:  mov    %eax,0x8(%esp)
084b9ca8 +0x176:  movl   $"%s%s.log",0x4(%esp)
084b9cb0 +0x17e:  lea    -0x123(%ebp),%eax
084b9cb6 +0x184:  mov    %eax,(%esp)
084b9cb9 +0x187:  call   0807e440 <_init+0xd38>
084b9cbe +0x18c:  movl   $"a",0x4(%esp)
084b9cc6 +0x194:  lea    -0x123(%ebp),%eax
084b9ccc +0x19a:  mov    %eax,(%esp)
084b9ccf +0x19d:  call   0807e770 <_init+0x1068>
084b9cd4 +0x1a2:  mov    %eax,-0xc(%ebp)
084b9cd7 +0x1a5:  cmpl   $0x0,-0xc(%ebp)
084b9cdb +0x1a9:  jne    084b9ce4 <+0x1b2>
084b9cdd +0x1ab:  mov    $0x0,%eax
084b9ce2 +0x1b0:  jmp    084b9cfb <+0x1c9>
084b9ce4 +0x1b2:  mov    &_ZN10HistoryLog6count_E,%eax
084b9ce9 +0x1b7:  add    $0x1,%eax
084b9cec +0x1ba:  mov    %eax,&_ZN10HistoryLog6count_E
084b9cf1 +0x1bf:  mov    -0xc(%ebp),%eax
084b9cf4 +0x1c2:  jmp    084b9cfb <+0x1c9>
084b9cf6 +0x1c4:  mov    $0x0,%eax
084b9cfb +0x1c9:  add    $0x130,%esp
084b9d01 +0x1cf:  pop    %ebx
084b9d02 +0x1d0:  pop    %edi
084b9d03 +0x1d1:  pop    %ebp
084b9d04 +0x1d2:  ret
084b9d05 +0x1d3:  nop
```

## 反编译 C

```c
// HistoryLog::LogOpen @ 0x84b9b32

/* HistoryLog::LogOpen(unsigned int) */

FILE * HistoryLog::LogOpen(uint param_1)

{
  FILE *pFVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  bool bVar7;
  byte bVar8;
  char local_127;
  char local_126 [126];
  stat local_a8;
  char local_50 [50];
  char local_1e [10];
  int local_14;
  int local_10;
  
  bVar8 = 0;
  local_14 = rand();
  local_14 = local_14 % 100;
  if (local_14 < 0x60) {
    pFVar1 = (FILE *)0x0;
  }
  else {
    local_10 = StaticPool<_IO_FILE,50>::Acquire((StaticPool<_IO_FILE,50> *)logfiles_);
    if (local_10 == 0) {
      pFVar1 = (FILE *)0x0;
    }
    else {
      local_1e[0] = '\0';
      local_1e[1] = '\0';
      local_1e[2] = '\0';
      local_1e[3] = '\0';
      local_1e[4] = '\0';
      local_1e[5] = '\0';
      local_1e[6] = '\0';
      local_1e[7] = '\0';
      local_1e[8] = '\0';
      local_1e[9] = '\0';
      get_str_date(local_1e,10,'\0');
      pcVar5 = local_50;
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        pcVar5[0] = '\0';
        pcVar5[1] = '\0';
        pcVar5[2] = '\0';
        pcVar5[3] = '\0';
        pcVar5 = pcVar5 + ((uint)bVar8 * -2 + 1) * 4;
      }
      pcVar5[0] = '\0';
      pcVar5[1] = '\0';
      sprintf(local_50,"%s%s/","./history/",local_1e);
      iVar3 = stat(local_50,&local_a8);
      if (iVar3 < 0) {
        mkdir(local_50,0x1fd);
      }
      pcVar5 = &local_127;
      uVar6 = 0x7f;
      bVar7 = ((uint)pcVar5 & 1) != 0;
      if (bVar7) {
        local_127 = '\0';
        pcVar5 = local_126;
        uVar6 = 0x7e;
      }
      if (((uint)pcVar5 & 2) != 0) {
        pcVar5[0] = '\0';
        pcVar5[1] = '\0';
        pcVar5 = pcVar5 + 2;
        uVar6 = uVar6 - 2;
      }
      for (uVar4 = uVar6 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        pcVar5[0] = '\0';
        pcVar5[1] = '\0';
        pcVar5[2] = '\0';
        pcVar5[3] = '\0';
        pcVar5 = pcVar5 + ((uint)bVar8 * -2 + 1) * 4;
      }
      if ((uVar6 & 2) != 0) {
        pcVar5[0] = '\0';
        pcVar5[1] = '\0';
        pcVar5 = pcVar5 + 2;
      }
      if (!bVar7) {
        *pcVar5 = '\0';
      }
      uVar2 = NumberToString(param_1,0);
      sprintf(&local_127,"%s%s.log",local_50,uVar2);
      pFVar1 = fopen(&local_127,"a");
      if (pFVar1 == (FILE *)0x0) {
        pFVar1 = (FILE *)0x0;
      }
      else {
        count_ = count_ + 1;
      }
    }
  }
  return pFVar1;
}
```
