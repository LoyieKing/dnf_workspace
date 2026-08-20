# hasPreventPrefixCharacName

`_ZN12CDataManager26hasPreventPrefixCharacNameEPKci`

`CDataManager::hasPreventPrefixCharacName(char const*, int)`

| 类 | 地址 |
|---|---|
| `CDataManager` | `0x0836360c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0836360c  _ZN12CDataManager26hasPreventPrefixCharacNameEPKci
#           CDataManager::hasPreventPrefixCharacName(char const*, int)
# range [0x0836360c, 0x08363715]
0836360c +0x000:  push   %ebp
0836360d +0x001:  mov    %esp,%ebp
0836360f +0x003:  push   %esi
08363610 +0x004:  push   %ebx
08363611 +0x005:  sub    $0x30,%esp
08363614 +0x008:  movl   $0x0,-0x10(%ebp)
0836361b +0x00f:  jmp    083636f3 <+0xe7>
08363620 +0x014:  mov    -0x10(%ebp),%eax
08363623 +0x017:  add    %eax,%eax
08363625 +0x019:  mov    %eax,%edx
08363627 +0x01b:  shl    $0x4,%edx
0836362a +0x01e:  sub    %eax,%edx
0836362c +0x020:  lea    0x190(%edx),%eax
08363632 +0x026:  add    0x8(%ebp),%eax
08363635 +0x029:  add    $0x8,%eax
08363638 +0x02c:  mov    %eax,(%esp)
0836363b +0x02f:  call   0807e3b0 <_init+0xca8>
08363640 +0x034:  mov    %eax,-0xc(%ebp)
08363643 +0x037:  lea    -0x25(%ebp),%eax
08363646 +0x03a:  mov    $0x15,%edx
0836364b +0x03f:  mov    $0x0,%ecx
08363650 +0x044:  mov    %eax,%ebx
08363652 +0x046:  and    $0x1,%ebx
08363655 +0x049:  test   %ebx,%ebx
08363657 +0x04b:  je     08363661 <+0x55>
08363659 +0x04d:  mov    %cl,(%eax)
0836365b +0x04f:  add    $0x1,%eax
0836365e +0x052:  sub    $0x1,%edx
08363661 +0x055:  mov    %eax,%ebx
08363663 +0x057:  and    $0x2,%ebx
08363666 +0x05a:  test   %ebx,%ebx
08363668 +0x05c:  je     08363673 <+0x67>
0836366a +0x05e:  mov    %cx,(%eax)
0836366d +0x061:  add    $0x2,%eax
08363670 +0x064:  sub    $0x2,%edx
08363673 +0x067:  mov    %edx,%esi
08363675 +0x069:  and    $0xfffffffc,%esi
08363678 +0x06c:  mov    $0x0,%ebx
0836367d +0x071:  mov    %ecx,(%eax,%ebx,1)
08363680 +0x074:  add    $0x4,%ebx
08363683 +0x077:  cmp    %esi,%ebx
08363685 +0x079:  jb     0836367d <+0x71>
08363687 +0x07b:  add    %ebx,%eax
08363689 +0x07d:  mov    %edx,%ebx
0836368b +0x07f:  and    $0x2,%ebx
0836368e +0x082:  test   %ebx,%ebx
08363690 +0x084:  je     08363698 <+0x8c>
08363692 +0x086:  mov    %cx,(%eax)
08363695 +0x089:  add    $0x2,%eax
08363698 +0x08c:  and    $0x1,%edx
0836369b +0x08f:  test   %edx,%edx
0836369d +0x091:  je     083636a4 <+0x98>
0836369f +0x093:  mov    %cl,(%eax)
083636a1 +0x095:  add    $0x1,%eax
083636a4 +0x098:  mov    -0xc(%ebp),%eax
083636a7 +0x09b:  mov    %eax,0x8(%esp)
083636ab +0x09f:  mov    0xc(%ebp),%eax
083636ae +0x0a2:  mov    %eax,0x4(%esp)
083636b2 +0x0a6:  lea    -0x25(%ebp),%eax
083636b5 +0x0a9:  mov    %eax,(%esp)
083636b8 +0x0ac:  call   0807d8a0 <_init+0x198>
083636bd +0x0b1:  mov    -0x10(%ebp),%eax
083636c0 +0x0b4:  add    %eax,%eax
083636c2 +0x0b6:  mov    %eax,%edx
083636c4 +0x0b8:  shl    $0x4,%edx
083636c7 +0x0bb:  sub    %eax,%edx
083636c9 +0x0bd:  lea    0x190(%edx),%eax
083636cf +0x0c3:  add    0x8(%ebp),%eax
083636d2 +0x0c6:  add    $0x8,%eax
083636d5 +0x0c9:  lea    -0x25(%ebp),%edx
083636d8 +0x0cc:  mov    %edx,0x4(%esp)
083636dc +0x0d0:  mov    %eax,(%esp)
083636df +0x0d3:  call   0807e4e0 <_init+0xdd8>
083636e4 +0x0d8:  test   %eax,%eax
083636e6 +0x0da:  jne    083636ef <+0xe3>
083636e8 +0x0dc:  mov    $0x1,%eax
083636ed +0x0e1:  jmp    0836370f <+0x103>
083636ef +0x0e3:  addl   $0x1,-0x10(%ebp)
083636f3 +0x0e7:  mov    0x8(%ebp),%eax
083636f6 +0x0ea:  mov    0x194(%eax),%eax
083636fc +0x0f0:  cmp    -0x10(%ebp),%eax
083636ff +0x0f3:  setg   %al
08363702 +0x0f6:  test   %al,%al
08363704 +0x0f8:  jne    08363620 <+0x14>
0836370a +0x0fe:  mov    $0x0,%eax
0836370f +0x103:  add    $0x30,%esp
08363712 +0x106:  pop    %ebx
08363713 +0x107:  pop    %esi
08363714 +0x108:  pop    %ebp
08363715 +0x109:  ret
```

## 反编译 C

```c
// CDataManager::hasPreventPrefixCharacName @ 0x836360c

/* CDataManager::hasPreventPrefixCharacName(char const*, int) */

undefined4 CDataManager::hasPreventPrefixCharacName(char *param_1,int param_2)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  char local_29;
  char local_28 [20];
  int local_14;
  size_t local_10;
  
  local_14 = 0;
  while( true ) {
    if (*(int *)(param_1 + 0x194) <= local_14) {
      return 0;
    }
    local_10 = strlen(param_1 + local_14 * 0x1e + 0x198);
    pcVar2 = &local_29;
    uVar4 = 0x15;
    bVar6 = ((uint)pcVar2 & 1) != 0;
    if (bVar6) {
      local_29 = '\0';
      pcVar2 = local_28;
      uVar4 = 0x14;
    }
    if (((uint)pcVar2 & 2) != 0) {
      pcVar2[0] = '\0';
      pcVar2[1] = '\0';
      pcVar2 = pcVar2 + 2;
      uVar4 = uVar4 - 2;
    }
    uVar5 = 0;
    do {
      pcVar1 = pcVar2 + uVar5;
      pcVar1[0] = '\0';
      pcVar1[1] = '\0';
      pcVar1[2] = '\0';
      pcVar1[3] = '\0';
      uVar5 = uVar5 + 4;
    } while (uVar5 < (uVar4 & 0xfffffffc));
    pcVar2 = pcVar2 + uVar5;
    if ((uVar4 & 2) != 0) {
      pcVar2[0] = '\0';
      pcVar2[1] = '\0';
      pcVar2 = pcVar2 + 2;
    }
    if (!bVar6) {
      *pcVar2 = '\0';
    }
    memcpy(&local_29,(void *)param_2,local_10);
    iVar3 = strcmp(param_1 + local_14 * 0x1e + 0x198,&local_29);
    if (iVar3 == 0) break;
    local_14 = local_14 + 1;
  }
  return 1;
}
```
