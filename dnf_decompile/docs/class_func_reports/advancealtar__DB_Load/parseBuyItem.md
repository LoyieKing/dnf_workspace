# parseBuyItem

`_ZN12advancealtar7DB_Load12parseBuyItemEPcPNS_8_BuyItemEi`

`advancealtar::DB_Load::parseBuyItem(char*, advancealtar::_BuyItem*, int)`

| 类 | 地址 |
|---|---|
| `advancealtar::DB_Load` | `0x0813e708` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0813e708  _ZN12advancealtar7DB_Load12parseBuyItemEPcPNS_8_BuyItemEi
#           advancealtar::DB_Load::parseBuyItem(char*, advancealtar::_BuyItem*, int)
# range [0x0813e708, 0x0813e8cb]
0813e708 +0x000:  push   %ebp
0813e709 +0x001:  mov    %esp,%ebp
0813e70b +0x003:  push   %ebx
0813e70c +0x004:  sub    $0x34,%esp
0813e70f +0x007:  cmpl   $0x0,0xc(%ebp)
0813e713 +0x00b:  je     0813e71b <+0x13>
0813e715 +0x00d:  cmpl   $0x0,0x10(%ebp)
0813e719 +0x011:  jne    0813e725 <+0x1d>
0813e71b +0x013:  mov    $0x0,%eax
0813e720 +0x018:  jmp    0813e8c5 <+0x1bd>
0813e725 +0x01d:  movl   $0x0,-0x1c(%ebp)
0813e72c +0x024:  lea    -0x1c(%ebp),%eax
0813e72f +0x027:  mov    %eax,0x8(%esp)
0813e733 +0x02b:  movl   $"|",0x4(%esp)
0813e73b +0x033:  mov    0xc(%ebp),%eax
0813e73e +0x036:  mov    %eax,(%esp)
0813e741 +0x039:  call   0807e150 <_init+0xa48>
0813e746 +0x03e:  mov    %eax,-0x18(%ebp)
0813e749 +0x041:  movl   $0x0,-0x14(%ebp)
0813e750 +0x048:  jmp    0813e89e <+0x196>
0813e755 +0x04d:  movl   $0x0,-0x20(%ebp)
0813e75c +0x054:  lea    -0x20(%ebp),%eax
0813e75f +0x057:  mov    %eax,0x8(%esp)
0813e763 +0x05b:  movl   $",",0x4(%esp)
0813e76b +0x063:  mov    -0x18(%ebp),%eax
0813e76e +0x066:  mov    %eax,(%esp)
0813e771 +0x069:  call   0807e150 <_init+0xa48>
0813e776 +0x06e:  mov    %eax,-0x10(%ebp)
0813e779 +0x071:  movl   $0x0,-0xc(%ebp)
0813e780 +0x078:  jmp    0813e859 <+0x151>
0813e785 +0x07d:  cmpl   $0x0,-0x10(%ebp)
0813e789 +0x081:  je     0813e87b <+0x173>
0813e78f +0x087:  mov    -0xc(%ebp),%eax
0813e792 +0x08a:  cmp    $0x1,%eax
0813e795 +0x08d:  je     0813e7d4 <+0xcc>
0813e797 +0x08f:  cmp    $0x1,%eax
0813e79a +0x092:  jg     0813e7a5 <+0x9d>
0813e79c +0x094:  test   %eax,%eax
0813e79e +0x096:  je     0813e7b4 <+0xac>
0813e7a0 +0x098:  jmp    0813e837 <+0x12f>
0813e7a5 +0x09d:  cmp    $0x2,%eax
0813e7a8 +0x0a0:  je     0813e7f5 <+0xed>
0813e7aa +0x0a2:  cmp    $0x3,%eax
0813e7ad +0x0a5:  je     0813e817 <+0x10f>
0813e7af +0x0a7:  jmp    0813e837 <+0x12f>
0813e7b4 +0x0ac:  mov    -0x14(%ebp),%edx
0813e7b7 +0x0af:  mov    %edx,%eax
0813e7b9 +0x0b1:  add    %eax,%eax
0813e7bb +0x0b3:  add    %edx,%eax
0813e7bd +0x0b5:  shl    $0x2,%eax
0813e7c0 +0x0b8:  mov    %eax,%ebx
0813e7c2 +0x0ba:  add    0x10(%ebp),%ebx
0813e7c5 +0x0bd:  mov    -0x10(%ebp),%eax
0813e7c8 +0x0c0:  mov    %eax,(%esp)
0813e7cb +0x0c3:  call   0807e6f0 <_init+0xfe8>
0813e7d0 +0x0c8:  mov    %eax,(%ebx)
0813e7d2 +0x0ca:  jmp    0813e837 <+0x12f>
0813e7d4 +0x0cc:  mov    -0x14(%ebp),%edx
0813e7d7 +0x0cf:  mov    %edx,%eax
0813e7d9 +0x0d1:  add    %eax,%eax
0813e7db +0x0d3:  add    %edx,%eax
0813e7dd +0x0d5:  shl    $0x2,%eax
0813e7e0 +0x0d8:  mov    %eax,%ebx
0813e7e2 +0x0da:  add    0x10(%ebp),%ebx
0813e7e5 +0x0dd:  mov    -0x10(%ebp),%eax
0813e7e8 +0x0e0:  mov    %eax,(%esp)
0813e7eb +0x0e3:  call   0807e6f0 <_init+0xfe8>
0813e7f0 +0x0e8:  mov    %eax,0x4(%ebx)
0813e7f3 +0x0eb:  jmp    0813e837 <+0x12f>
0813e7f5 +0x0ed:  mov    -0x14(%ebp),%edx
0813e7f8 +0x0f0:  mov    %edx,%eax
0813e7fa +0x0f2:  add    %eax,%eax
0813e7fc +0x0f4:  add    %edx,%eax
0813e7fe +0x0f6:  shl    $0x2,%eax
0813e801 +0x0f9:  mov    %eax,%ebx
0813e803 +0x0fb:  add    0x10(%ebp),%ebx
0813e806 +0x0fe:  mov    -0x10(%ebp),%eax
0813e809 +0x101:  mov    %eax,(%esp)
0813e80c +0x104:  call   0807e6f0 <_init+0xfe8>
0813e811 +0x109:  mov    %ax,0x8(%ebx)
0813e815 +0x10d:  jmp    0813e837 <+0x12f>
0813e817 +0x10f:  mov    -0x14(%ebp),%edx
0813e81a +0x112:  mov    %edx,%eax
0813e81c +0x114:  add    %eax,%eax
0813e81e +0x116:  add    %edx,%eax
0813e820 +0x118:  shl    $0x2,%eax
0813e823 +0x11b:  mov    %eax,%ebx
0813e825 +0x11d:  add    0x10(%ebp),%ebx
0813e828 +0x120:  mov    -0x10(%ebp),%eax
0813e82b +0x123:  mov    %eax,(%esp)
0813e82e +0x126:  call   0807e6f0 <_init+0xfe8>
0813e833 +0x12b:  mov    %ax,0xa(%ebx)
0813e837 +0x12f:  lea    -0x20(%ebp),%eax
0813e83a +0x132:  mov    %eax,0x8(%esp)
0813e83e +0x136:  movl   $",",0x4(%esp)
0813e846 +0x13e:  movl   $0x0,(%esp)
0813e84d +0x145:  call   0807e150 <_init+0xa48>
0813e852 +0x14a:  mov    %eax,-0x10(%ebp)
0813e855 +0x14d:  addl   $0x1,-0xc(%ebp)
0813e859 +0x151:  cmpl   $0x0,-0x10(%ebp)
0813e85d +0x155:  je     0813e86c <+0x164>
0813e85f +0x157:  cmpl   $0x3,-0xc(%ebp)
0813e863 +0x15b:  jg     0813e86c <+0x164>
0813e865 +0x15d:  mov    $0x1,%eax
0813e86a +0x162:  jmp    0813e871 <+0x169>
0813e86c +0x164:  mov    $0x0,%eax
0813e871 +0x169:  test   %al,%al
0813e873 +0x16b:  jne    0813e785 <+0x7d>
0813e879 +0x171:  jmp    0813e87c <+0x174>
0813e87b +0x173:  nop
0813e87c +0x174:  lea    -0x1c(%ebp),%eax
0813e87f +0x177:  mov    %eax,0x8(%esp)
0813e883 +0x17b:  movl   $"|",0x4(%esp)
0813e88b +0x183:  movl   $0x0,(%esp)
0813e892 +0x18a:  call   0807e150 <_init+0xa48>
0813e897 +0x18f:  mov    %eax,-0x18(%ebp)
0813e89a +0x192:  addl   $0x1,-0x14(%ebp)
0813e89e +0x196:  cmpl   $0x0,-0x18(%ebp)
0813e8a2 +0x19a:  je     0813e8b3 <+0x1ab>
0813e8a4 +0x19c:  mov    -0x14(%ebp),%eax
0813e8a7 +0x19f:  cmp    0x14(%ebp),%eax
0813e8aa +0x1a2:  jge    0813e8b3 <+0x1ab>
0813e8ac +0x1a4:  mov    $0x1,%eax
0813e8b1 +0x1a9:  jmp    0813e8b8 <+0x1b0>
0813e8b3 +0x1ab:  mov    $0x0,%eax
0813e8b8 +0x1b0:  test   %al,%al
0813e8ba +0x1b2:  jne    0813e755 <+0x4d>
0813e8c0 +0x1b8:  mov    $0x1,%eax
0813e8c5 +0x1bd:  add    $0x34,%esp
0813e8c8 +0x1c0:  pop    %ebx
0813e8c9 +0x1c1:  pop    %ebp
0813e8ca +0x1c2:  ret
0813e8cb +0x1c3:  nop
```

## 反编译 C

```c
// advancealtar::DB_Load::parseBuyItem @ 0x813e708

/* advancealtar::DB_Load::parseBuyItem(char*, advancealtar::_BuyItem*, int) */

undefined4 __thiscall
advancealtar::DB_Load::parseBuyItem(DB_Load *this,char *param_1,_BuyItem *param_2,int param_3)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  char *local_24;
  char *local_20;
  char *local_1c;
  int local_18;
  char *local_14;
  int local_10;
  
  if ((param_1 == (char *)0x0) || (param_2 == (_BuyItem *)0x0)) {
    uVar2 = 0;
  }
  else {
    local_20 = (char *)0x0;
    local_1c = strtok_r(param_1,"|",&local_20);
    local_18 = 0;
    while( true ) {
      if ((local_1c == (char *)0x0) || (param_3 <= local_18)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) break;
      local_24 = (char *)0x0;
      local_14 = strtok_r(local_1c,",",&local_24);
      local_10 = 0;
      while( true ) {
        if ((local_14 == (char *)0x0) || (3 < local_10)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if ((!bVar1) || (local_14 == (char *)0x0)) break;
        if (local_10 == 1) {
          iVar3 = local_18 * 0xc;
          iVar4 = atoi(local_14);
          *(int *)(param_2 + iVar3 + 4) = iVar4;
        }
        else if (local_10 < 2) {
          if (local_10 == 0) {
            iVar3 = local_18 * 0xc;
            iVar4 = atoi(local_14);
            *(int *)(param_2 + iVar3) = iVar4;
          }
        }
        else if (local_10 == 2) {
          iVar3 = local_18 * 0xc;
          iVar4 = atoi(local_14);
          *(short *)(param_2 + iVar3 + 8) = (short)iVar4;
        }
        else if (local_10 == 3) {
          iVar3 = local_18 * 0xc;
          iVar4 = atoi(local_14);
          *(short *)(param_2 + iVar3 + 10) = (short)iVar4;
        }
        local_14 = strtok_r((char *)0x0,",",&local_24);
        local_10 = local_10 + 1;
      }
      local_1c = strtok_r((char *)0x0,"|",&local_20);
      local_18 = local_18 + 1;
    }
    uVar2 = 1;
  }
  return uVar2;
}
```
