# process

`_ZN22DisPatcher_RepairEquip7processEP5CUserR8MSG_BASER9ParamBase`

`DisPatcher_RepairEquip::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_RepairEquip` | `0x081c6082` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081c6082  _ZN22DisPatcher_RepairEquip7processEP5CUserR8MSG_BASER9ParamBase
#           DisPatcher_RepairEquip::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081c6082, 0x081c619b]
081c6082 +0x000:  push   %ebp
081c6083 +0x001:  mov    %esp,%ebp
081c6085 +0x003:  push   %edi
081c6086 +0x004:  push   %esi
081c6087 +0x005:  push   %ebx
081c6088 +0x006:  sub    $0x4c,%esp
081c608b +0x009:  mov    0x10(%ebp),%eax
081c608e +0x00c:  mov    %eax,0x8(%esp)
081c6092 +0x010:  mov    0xc(%ebp),%eax
081c6095 +0x013:  mov    %eax,0x4(%esp)
081c6099 +0x017:  mov    0x8(%ebp),%eax
081c609c +0x01a:  mov    %eax,(%esp)
081c609f +0x01d:  call   081c619c <_ZN22DisPatcher_RepairEquip11check_errorEP5CUserR8MSG_BASE>  ; DisPatcher_RepairEquip::check_error(CUser*, MSG_BASE&)
081c60a4 +0x022:  mov    %eax,-0x24(%ebp)
081c60a7 +0x025:  cmpl   $0x0,-0x24(%ebp)
081c60ab +0x029:  jle    081c60d4 <+0x52>
081c60ad +0x02b:  mov    -0x24(%ebp),%eax
081c60b0 +0x02e:  movzbl %al,%eax
081c60b3 +0x031:  mov    %eax,0x8(%esp)
081c60b7 +0x035:  movl   $0x19,0x4(%esp)
081c60bf +0x03d:  mov    0xc(%ebp),%eax
081c60c2 +0x040:  mov    %eax,(%esp)
081c60c5 +0x043:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081c60ca +0x048:  mov    $0xffffffff,%eax
081c60cf +0x04d:  jmp    081c6194 <+0x112>
081c60d4 +0x052:  cmpl   $0x0,-0x24(%ebp)
081c60d8 +0x056:  jns    081c610a <+0x88>
081c60da +0x058:  mov    0xc(%ebp),%eax
081c60dd +0x05b:  mov    %eax,(%esp)
081c60e0 +0x05e:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081c60e5 +0x063:  mov    %eax,0xc(%esp)
081c60e9 +0x067:  movl   $0x0,0x8(%esp)
081c60f1 +0x06f:  movl   $&_ZZN22DisPatcher_RepairEquip7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
081c60f9 +0x077:  movl   $0x1500,(%esp)
081c6100 +0x07e:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081c6105 +0x083:  jmp    081c6194 <+0x112>
081c610a +0x088:  mov    0x10(%ebp),%eax
081c610d +0x08b:  mov    %eax,-0x20(%ebp)
081c6110 +0x08e:  mov    0x14(%ebp),%eax
081c6113 +0x091:  mov    %eax,-0x1c(%ebp)
081c6116 +0x094:  mov    -0x1c(%ebp),%eax
081c6119 +0x097:  add    $0xc,%eax
081c611c +0x09a:  mov    %eax,-0x2c(%ebp)
081c611f +0x09d:  mov    -0x20(%ebp),%eax
081c6122 +0x0a0:  movzwl 0x10(%eax),%eax
081c6126 +0x0a4:  movzwl %ax,%edi
081c6129 +0x0a7:  mov    -0x20(%ebp),%eax
081c612c +0x0aa:  movzwl 0xe(%eax),%eax
081c6130 +0x0ae:  movswl %ax,%esi
081c6133 +0x0b1:  mov    -0x20(%ebp),%eax
081c6136 +0x0b4:  movzbl 0xd(%eax),%eax
081c613a +0x0b8:  movsbl %al,%ebx
081c613d +0x0bb:  call   08151add <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1412>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1412
081c6142 +0x0c0:  mov    -0x2c(%ebp),%edx
081c6145 +0x0c3:  mov    %edx,0x14(%esp)
081c6149 +0x0c7:  mov    %edi,0x10(%esp)
081c614d +0x0cb:  mov    %esi,0xc(%esp)
081c6151 +0x0cf:  mov    %ebx,0x8(%esp)
081c6155 +0x0d3:  mov    0xc(%ebp),%edx
081c6158 +0x0d6:  mov    %edx,0x4(%esp)
081c615c +0x0da:  mov    %eax,(%esp)
081c615f +0x0dd:  call   08619cec <_ZN5Store12repair_equipEP5CUsercstRt>  ; Store::repair_equip(CUser*, char, short, unsigned short, unsigned short&)
081c6164 +0x0e2:  mov    -0x1c(%ebp),%edx
081c6167 +0x0e5:  mov    %eax,0x4(%edx)
081c616a +0x0e8:  mov    -0x1c(%ebp),%eax
081c616d +0x0eb:  mov    0x4(%eax),%eax
081c6170 +0x0ee:  test   %eax,%eax
081c6172 +0x0f0:  jne    081c618f <+0x10d>
081c6174 +0x0f2:  mov    -0x20(%ebp),%eax
081c6177 +0x0f5:  movzbl 0xd(%eax),%edx
081c617b +0x0f9:  mov    -0x1c(%ebp),%eax
081c617e +0x0fc:  mov    %dl,0x8(%eax)
081c6181 +0x0ff:  mov    -0x20(%ebp),%eax
081c6184 +0x102:  movzwl 0xe(%eax),%edx
081c6188 +0x106:  mov    -0x1c(%ebp),%eax
081c618b +0x109:  mov    %dx,0xa(%eax)
081c618f +0x10d:  mov    $0x0,%eax
081c6194 +0x112:  add    $0x4c,%esp
081c6197 +0x115:  pop    %ebx
081c6198 +0x116:  pop    %esi
081c6199 +0x117:  pop    %edi
081c619a +0x118:  pop    %ebp
081c619b +0x119:  ret
```

## 反编译 C

```c
// DisPatcher_RepairEquip::process @ 0x81c6082

/* DisPatcher_RepairEquip::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
DisPatcher_RepairEquip::process
          (DisPatcher_RepairEquip *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  MSG_BASE MVar1;
  ushort uVar2;
  short sVar3;
  uint uVar4;
  undefined4 uVar5;
  Store *this_00;
  
  uVar4 = check_error((CUser *)this,(MSG_BASE *)param_1);
  if ((int)uVar4 < 1) {
    if ((int)uVar4 < 0) {
      uVar4 = CUser::get_acc_id(param_1);
      uVar5 = LineFunc(0x1500,
                       "virtual int DisPatcher_RepairEquip::process(CUser*, MSG_BASE&, ParamBase&)",
                       0,uVar4);
    }
    else {
      uVar2 = *(ushort *)(param_2 + 0x10);
      sVar3 = *(short *)(param_2 + 0xe);
      MVar1 = param_2[0xd];
      this_00 = (Store *)G_Store();
      uVar5 = Store::repair_equip(this_00,param_1,(char)MVar1,sVar3,uVar2,(ushort *)(param_3 + 0xc))
      ;
      *(undefined4 *)(param_3 + 4) = uVar5;
      if (*(int *)(param_3 + 4) == 0) {
        *(MSG_BASE *)(param_3 + 8) = param_2[0xd];
        *(undefined2 *)(param_3 + 10) = *(undefined2 *)(param_2 + 0xe);
      }
      uVar5 = 0;
    }
  }
  else {
    CUser::SendCmdErrorPacket(param_1,0x19,uVar4 & 0xff);
    uVar5 = 0xffffffff;
  }
  return uVar5;
}
```
