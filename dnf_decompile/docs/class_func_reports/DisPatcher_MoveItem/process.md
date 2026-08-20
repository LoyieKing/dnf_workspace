# process

`_ZN19DisPatcher_MoveItem7processEP5CUserR8MSG_BASER9ParamBase`

`DisPatcher_MoveItem::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_MoveItem` | `0x081c5904` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081c5904  _ZN19DisPatcher_MoveItem7processEP5CUserR8MSG_BASER9ParamBase
#           DisPatcher_MoveItem::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081c5904, 0x081c5b75]
081c5904 +0x000:  push   %ebp
081c5905 +0x001:  mov    %esp,%ebp
081c5907 +0x003:  push   %edi
081c5908 +0x004:  push   %esi
081c5909 +0x005:  push   %ebx
081c590a +0x006:  sub    $0x6c,%esp
081c590d +0x009:  mov    0x10(%ebp),%eax
081c5910 +0x00c:  mov    %eax,-0x24(%ebp)
081c5913 +0x00f:  mov    0x14(%ebp),%eax
081c5916 +0x012:  mov    %eax,-0x20(%ebp)
081c5919 +0x015:  mov    0x10(%ebp),%eax
081c591c +0x018:  mov    %eax,0x8(%esp)
081c5920 +0x01c:  mov    0xc(%ebp),%eax
081c5923 +0x01f:  mov    %eax,0x4(%esp)
081c5927 +0x023:  mov    0x8(%ebp),%eax
081c592a +0x026:  mov    %eax,(%esp)
081c592d +0x029:  call   081c57a0 <_ZN19DisPatcher_MoveItem11check_errorEP5CUserR8MSG_BASE>  ; DisPatcher_MoveItem::check_error(CUser*, MSG_BASE&)
081c5932 +0x02e:  mov    %eax,%edx
081c5934 +0x030:  mov    -0x20(%ebp),%eax
081c5937 +0x033:  mov    %edx,0x4(%eax)
081c593a +0x036:  mov    -0x20(%ebp),%eax
081c593d +0x039:  mov    0x4(%eax),%eax
081c5940 +0x03c:  test   %eax,%eax
081c5942 +0x03e:  jle    081c5975 <+0x71>
081c5944 +0x040:  mov    -0x20(%ebp),%eax
081c5947 +0x043:  mov    0x4(%eax),%eax
081c594a +0x046:  cmp    $0xd5,%eax
081c594f +0x04b:  jne    081c596b <+0x67>
081c5951 +0x04d:  mov    -0x24(%ebp),%eax
081c5954 +0x050:  movzbl 0xd(%eax),%edx
081c5958 +0x054:  mov    -0x20(%ebp),%eax
081c595b +0x057:  mov    %dl,0x8(%eax)
081c595e +0x05a:  mov    -0x24(%ebp),%eax
081c5961 +0x05d:  movzbl 0x18(%eax),%edx
081c5965 +0x061:  mov    -0x20(%ebp),%eax
081c5968 +0x064:  mov    %dl,0x10(%eax)
081c596b +0x067:  mov    $0x0,%eax
081c5970 +0x06c:  jmp    081c5b6e <+0x26a>
081c5975 +0x071:  mov    -0x20(%ebp),%eax
081c5978 +0x074:  mov    0x4(%eax),%eax
081c597b +0x077:  test   %eax,%eax
081c597d +0x079:  jns    081c59b1 <+0xad>
081c597f +0x07b:  mov    0xc(%ebp),%eax
081c5982 +0x07e:  mov    %eax,(%esp)
081c5985 +0x081:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081c598a +0x086:  mov    -0x20(%ebp),%edx
081c598d +0x089:  mov    0x4(%edx),%edx
081c5990 +0x08c:  mov    %eax,0xc(%esp)
081c5994 +0x090:  mov    %edx,0x8(%esp)
081c5998 +0x094:  movl   $&_ZZN19DisPatcher_MoveItem7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
081c59a0 +0x09c:  movl   $0x141b,(%esp)
081c59a7 +0x0a3:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081c59ac +0x0a8:  jmp    081c5b6e <+0x26a>
081c59b1 +0x0ad:  mov    -0x24(%ebp),%eax
081c59b4 +0x0b0:  movzbl 0x18(%eax),%eax
081c59b8 +0x0b4:  cmp    $0x3,%al
081c59ba +0x0b6:  je     081c59cb <+0xc7>
081c59bc +0x0b8:  mov    -0x24(%ebp),%eax
081c59bf +0x0bb:  movzbl 0x18(%eax),%eax
081c59c3 +0x0bf:  cmp    $0x12,%al
081c59c5 +0x0c1:  jne    081c5a8c <+0x188>
081c59cb +0x0c7:  mov    -0x24(%ebp),%eax
081c59ce +0x0ca:  movzwl 0x19(%eax),%eax
081c59d2 +0x0ce:  cmp    $0x9,%ax
081c59d6 +0x0d2:  jle    081c5a8c <+0x188>
081c59dc +0x0d8:  mov    -0x24(%ebp),%eax
081c59df +0x0db:  movzwl 0x19(%eax),%eax
081c59e3 +0x0df:  cmp    $0x15,%ax
081c59e7 +0x0e3:  jg     081c5a8c <+0x188>
081c59ed +0x0e9:  mov    -0x24(%ebp),%eax
081c59f0 +0x0ec:  movzbl 0x24(%eax),%eax
081c59f4 +0x0f0:  movsbl %al,%ebx
081c59f7 +0x0f3:  mov    -0x24(%ebp),%eax
081c59fa +0x0f6:  movzbl 0x23(%eax),%eax
081c59fe +0x0fa:  movsbl %al,%esi
081c5a01 +0x0fd:  mov    -0x24(%ebp),%eax
081c5a04 +0x100:  mov    0x1b(%eax),%eax
081c5a07 +0x103:  mov    %eax,-0x40(%ebp)
081c5a0a +0x106:  mov    -0x24(%ebp),%eax
081c5a0d +0x109:  movzwl 0x19(%eax),%eax
081c5a11 +0x10d:  cwtl
081c5a12 +0x10e:  mov    %eax,-0x3c(%ebp)
081c5a15 +0x111:  mov    -0x24(%ebp),%eax
081c5a18 +0x114:  movzbl 0x18(%eax),%eax
081c5a1c +0x118:  movsbl %al,%eax
081c5a1f +0x11b:  mov    %eax,-0x38(%ebp)
081c5a22 +0x11e:  mov    -0x24(%ebp),%eax
081c5a25 +0x121:  mov    0x14(%eax),%eax
081c5a28 +0x124:  mov    %eax,-0x34(%ebp)
081c5a2b +0x127:  mov    -0x24(%ebp),%eax
081c5a2e +0x12a:  mov    0x10(%eax),%edi
081c5a31 +0x12d:  mov    -0x24(%ebp),%eax
081c5a34 +0x130:  movzwl 0xe(%eax),%eax
081c5a38 +0x134:  movswl %ax,%ecx
081c5a3b +0x137:  mov    -0x24(%ebp),%eax
081c5a3e +0x13a:  movzbl 0xd(%eax),%eax
081c5a42 +0x13e:  movsbl %al,%edx
081c5a45 +0x141:  mov    %ebx,0x28(%esp)
081c5a49 +0x145:  mov    %esi,0x24(%esp)
081c5a4d +0x149:  lea    -0x28(%ebp),%eax
081c5a50 +0x14c:  mov    %eax,0x20(%esp)
081c5a54 +0x150:  mov    -0x40(%ebp),%eax
081c5a57 +0x153:  mov    %eax,0x1c(%esp)
081c5a5b +0x157:  mov    -0x3c(%ebp),%eax
081c5a5e +0x15a:  mov    %eax,0x18(%esp)
081c5a62 +0x15e:  mov    -0x38(%ebp),%eax
081c5a65 +0x161:  mov    %eax,0x14(%esp)
081c5a69 +0x165:  mov    -0x34(%ebp),%eax
081c5a6c +0x168:  mov    %eax,0x10(%esp)
081c5a70 +0x16c:  mov    %edi,0xc(%esp)
081c5a74 +0x170:  mov    %ecx,0x8(%esp)
081c5a78 +0x174:  mov    %edx,0x4(%esp)
081c5a7c +0x178:  mov    0xc(%ebp),%eax
081c5a7f +0x17b:  mov    %eax,(%esp)
081c5a82 +0x17e:  call   0865f614 <_ZN5CUser26exchange_interspace_expandEiimiiimPicc>  ; CUser::exchange_interspace_expand(int, int, unsigned long, int, int, int, unsigned long, int*, char, char)
081c5a87 +0x183:  mov    %eax,-0x1c(%ebp)
081c5a8a +0x186:  jmp    081c5b01 <+0x1fd>
081c5a8c +0x188:  mov    -0x24(%ebp),%eax
081c5a8f +0x18b:  mov    0x1b(%eax),%eax
081c5a92 +0x18e:  mov    %eax,-0x30(%ebp)
081c5a95 +0x191:  mov    -0x24(%ebp),%eax
081c5a98 +0x194:  movzwl 0x19(%eax),%eax
081c5a9c +0x198:  cwtl
081c5a9d +0x199:  mov    %eax,-0x2c(%ebp)
081c5aa0 +0x19c:  mov    -0x24(%ebp),%eax
081c5aa3 +0x19f:  movzbl 0x18(%eax),%eax
081c5aa7 +0x1a3:  movsbl %al,%edi
081c5aaa +0x1a6:  mov    -0x24(%ebp),%eax
081c5aad +0x1a9:  mov    0x14(%eax),%esi
081c5ab0 +0x1ac:  mov    -0x24(%ebp),%eax
081c5ab3 +0x1af:  mov    0x10(%eax),%ebx
081c5ab6 +0x1b2:  mov    -0x24(%ebp),%eax
081c5ab9 +0x1b5:  movzwl 0xe(%eax),%eax
081c5abd +0x1b9:  movswl %ax,%ecx
081c5ac0 +0x1bc:  mov    -0x24(%ebp),%eax
081c5ac3 +0x1bf:  movzbl 0xd(%eax),%eax
081c5ac7 +0x1c3:  movsbl %al,%edx
081c5aca +0x1c6:  lea    -0x28(%ebp),%eax
081c5acd +0x1c9:  mov    %eax,0x20(%esp)
081c5ad1 +0x1cd:  mov    -0x30(%ebp),%eax
081c5ad4 +0x1d0:  mov    %eax,0x1c(%esp)
081c5ad8 +0x1d4:  mov    -0x2c(%ebp),%eax
081c5adb +0x1d7:  mov    %eax,0x18(%esp)
081c5adf +0x1db:  mov    %edi,0x14(%esp)
081c5ae3 +0x1df:  mov    %esi,0x10(%esp)
081c5ae7 +0x1e3:  mov    %ebx,0xc(%esp)
081c5aeb +0x1e7:  mov    %ecx,0x8(%esp)
081c5aef +0x1eb:  mov    %edx,0x4(%esp)
081c5af3 +0x1ef:  mov    0xc(%ebp),%eax
081c5af6 +0x1f2:  mov    %eax,(%esp)
081c5af9 +0x1f5:  call   0865f7b0 <_ZN5CUser19exchange_interspaceEiimiiimPi>  ; CUser::exchange_interspace(int, int, unsigned long, int, int, int, unsigned long, int*)
081c5afe +0x1fa:  mov    %eax,-0x1c(%ebp)
081c5b01 +0x1fd:  cmpl   $0x0,-0x1c(%ebp)
081c5b05 +0x201:  jne    081c5b46 <+0x242>
081c5b07 +0x203:  mov    -0x24(%ebp),%eax
081c5b0a +0x206:  movzbl 0xd(%eax),%edx
081c5b0e +0x20a:  mov    -0x20(%ebp),%eax
081c5b11 +0x20d:  mov    %dl,0x8(%eax)
081c5b14 +0x210:  mov    -0x24(%ebp),%eax
081c5b17 +0x213:  movzwl 0xe(%eax),%edx
081c5b1b +0x217:  mov    -0x20(%ebp),%eax
081c5b1e +0x21a:  mov    %dx,0xa(%eax)
081c5b22 +0x21e:  mov    -0x24(%ebp),%eax
081c5b25 +0x221:  mov    0x14(%eax),%edx
081c5b28 +0x224:  mov    -0x20(%ebp),%eax
081c5b2b +0x227:  mov    %edx,0xc(%eax)
081c5b2e +0x22a:  mov    -0x24(%ebp),%eax
081c5b31 +0x22d:  movzbl 0x18(%eax),%edx
081c5b35 +0x231:  mov    -0x20(%ebp),%eax
081c5b38 +0x234:  mov    %dl,0x10(%eax)
081c5b3b +0x237:  mov    -0x28(%ebp),%edx
081c5b3e +0x23a:  mov    -0x20(%ebp),%eax
081c5b41 +0x23d:  mov    %edx,0x14(%eax)
081c5b44 +0x240:  jmp    081c5b69 <+0x265>
081c5b46 +0x242:  mov    -0x1c(%ebp),%edx
081c5b49 +0x245:  mov    -0x20(%ebp),%eax
081c5b4c +0x248:  mov    %edx,0x4(%eax)
081c5b4f +0x24b:  mov    -0x24(%ebp),%eax
081c5b52 +0x24e:  movzbl 0xd(%eax),%edx
081c5b56 +0x252:  mov    -0x20(%ebp),%eax
081c5b59 +0x255:  mov    %dl,0x8(%eax)
081c5b5c +0x258:  mov    -0x24(%ebp),%eax
081c5b5f +0x25b:  movzbl 0x18(%eax),%edx
081c5b63 +0x25f:  mov    -0x20(%ebp),%eax
081c5b66 +0x262:  mov    %dl,0x10(%eax)
081c5b69 +0x265:  mov    $0x0,%eax
081c5b6e +0x26a:  add    $0x6c,%esp
081c5b71 +0x26d:  pop    %ebx
081c5b72 +0x26e:  pop    %esi
081c5b73 +0x26f:  pop    %edi
081c5b74 +0x270:  pop    %ebp
081c5b75 +0x271:  ret
```

## 反编译 C

```c
// DisPatcher_MoveItem::process @ 0x81c5904

/* DisPatcher_MoveItem::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
DisPatcher_MoveItem::process
          (DisPatcher_MoveItem *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  int local_2c;
  MSG_BASE *local_28;
  ParamBase *local_24;
  int local_20;
  
  local_28 = param_2;
  local_24 = param_3;
  uVar1 = check_error(this,param_1,param_2);
  *(undefined4 *)(local_24 + 4) = uVar1;
  if (*(int *)(local_24 + 4) < 1) {
    if (*(int *)(local_24 + 4) < 0) {
      uVar2 = CUser::get_acc_id(param_1);
      uVar1 = LineFunc(0x141b,
                       "virtual int DisPatcher_MoveItem::process(CUser*, MSG_BASE&, ParamBase&)",
                       *(int *)(local_24 + 4),uVar2);
    }
    else {
      if ((((local_28[0x18] == (MSG_BASE)0x3) || (local_28[0x18] == (MSG_BASE)0x12)) &&
          (9 < *(short *)(local_28 + 0x19))) && (*(short *)(local_28 + 0x19) < 0x16)) {
        local_20 = CUser::exchange_interspace_expand
                             (param_1,(int)(char)local_28[0xd],(int)*(short *)(local_28 + 0xe),
                              *(ulong *)(local_28 + 0x10),*(int *)(local_28 + 0x14),
                              (int)(char)local_28[0x18],(int)*(short *)(local_28 + 0x19),
                              *(ulong *)(local_28 + 0x1b),&local_2c,(char)local_28[0x23],
                              (char)local_28[0x24]);
      }
      else {
        local_20 = CUser::exchange_interspace
                             (param_1,(int)(char)local_28[0xd],(int)*(short *)(local_28 + 0xe),
                              *(ulong *)(local_28 + 0x10),*(int *)(local_28 + 0x14),
                              (int)(char)local_28[0x18],(int)*(short *)(local_28 + 0x19),
                              *(ulong *)(local_28 + 0x1b),&local_2c);
      }
      if (local_20 == 0) {
        *(MSG_BASE *)(local_24 + 8) = local_28[0xd];
        *(undefined2 *)(local_24 + 10) = *(undefined2 *)(local_28 + 0xe);
        *(undefined4 *)(local_24 + 0xc) = *(undefined4 *)(local_28 + 0x14);
        *(MSG_BASE *)(local_24 + 0x10) = local_28[0x18];
        *(int *)(local_24 + 0x14) = local_2c;
      }
      else {
        *(int *)(local_24 + 4) = local_20;
        *(MSG_BASE *)(local_24 + 8) = local_28[0xd];
        *(MSG_BASE *)(local_24 + 0x10) = local_28[0x18];
      }
      uVar1 = 0;
    }
  }
  else {
    if (*(int *)(local_24 + 4) == 0xd5) {
      *(MSG_BASE *)(local_24 + 8) = local_28[0xd];
      *(MSG_BASE *)(local_24 + 0x10) = local_28[0x18];
    }
    uVar1 = 0;
  }
  return uVar1;
}
```
