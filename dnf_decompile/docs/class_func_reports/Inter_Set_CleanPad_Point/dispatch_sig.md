# dispatch_sig

`_ZN24Inter_Set_CleanPad_Point12dispatch_sigEP5CUserPci`

`Inter_Set_CleanPad_Point::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_Set_CleanPad_Point` | `0x084dd12e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084dd12e  _ZN24Inter_Set_CleanPad_Point12dispatch_sigEP5CUserPci
#           Inter_Set_CleanPad_Point::dispatch_sig(CUser*, char*, int)
# range [0x084dd12e, 0x084dd1ed]
084dd12e +0x00:  push   %ebp
084dd12f +0x01:  mov    %esp,%ebp
084dd131 +0x03:  push   %edi
084dd132 +0x04:  push   %esi
084dd133 +0x05:  push   %ebx
084dd134 +0x06:  sub    $0x4c,%esp
084dd137 +0x09:  cmpl   $0x0,0xc(%ebp)
084dd13b +0x0d:  je     084dd1e1 <+0xb3>
084dd141 +0x13:  mov    0x10(%ebp),%eax
084dd144 +0x16:  mov    %eax,-0x1c(%ebp)
084dd147 +0x19:  mov    -0x1c(%ebp),%eax
084dd14a +0x1c:  movzwl 0xe(%eax),%eax
084dd14e +0x20:  movzwl %ax,%eax
084dd151 +0x23:  mov    0xc(%ebp),%edx
084dd154 +0x26:  add    $0x8e3f0,%edx
084dd15a +0x2c:  mov    %eax,0x4(%esp)
084dd15e +0x30:  mov    %edx,(%esp)
084dd161 +0x33:  call   082870de <_GLOBAL__I__ZN16Secu_DataControl14SetControlDataEP5CUserhtt+0x1c>  ; global constructors keyed to Secu_DataControl::SetControlData(CUser*, unsigned char, unsigned short, unsigned short)+0x1c
084dd166 +0x38:  mov    0xc(%ebp),%eax
084dd169 +0x3b:  add    $0x8e3f0,%eax
084dd16e +0x40:  mov    %eax,(%esp)
084dd171 +0x43:  call   0822eea4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x454e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x454e
084dd176 +0x48:  mov    %eax,%esi
084dd178 +0x4a:  mov    -0x1c(%ebp),%eax
084dd17b +0x4d:  movzwl 0xe(%eax),%eax
084dd17f +0x51:  movzwl %ax,%edi
084dd182 +0x54:  mov    0xc(%ebp),%eax
084dd185 +0x57:  mov    %eax,(%esp)
084dd188 +0x5a:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
084dd18d +0x5f:  movl   $0x0,0x4(%esp)
084dd195 +0x67:  mov    %eax,(%esp)
084dd198 +0x6a:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
084dd19d +0x6f:  mov    %eax,%ebx
084dd19f +0x71:  movl   $0x0,0xc(%esp)
084dd1a7 +0x79:  movl   $0x4886,0x8(%esp)
084dd1af +0x81:  movl   $&_ZZN24Inter_Set_CleanPad_Point12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x4(%esp)
084dd1b7 +0x89:  lea    -0x2c(%ebp),%eax
084dd1ba +0x8c:  mov    %eax,(%esp)
084dd1bd +0x8f:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084dd1c2 +0x94:  mov    %esi,0x10(%esp)
084dd1c6 +0x98:  mov    %edi,0xc(%esp)
084dd1ca +0x9c:  mov    %ebx,0x8(%esp)
084dd1ce +0xa0:  movl   $"CLEANPAD_POINT_CONTROL / m_id : %s , Point : %d (getPorint : %d)",0x4(%esp)
084dd1d6 +0xa8:  lea    -0x2c(%ebp),%eax
084dd1d9 +0xab:  mov    %eax,(%esp)
084dd1dc +0xae:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084dd1e1 +0xb3:  mov    $0x0,%eax
084dd1e6 +0xb8:  add    $0x4c,%esp
084dd1e9 +0xbb:  pop    %ebx
084dd1ea +0xbc:  pop    %esi
084dd1eb +0xbd:  pop    %edi
084dd1ec +0xbe:  pop    %ebp
084dd1ed +0xbf:  ret
```

## 反编译 C

```c
// Inter_Set_CleanPad_Point::dispatch_sig @ 0x84dd12e

/* Inter_Set_CleanPad_Point::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_Set_CleanPad_Point::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  ushort uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  cMyTrace local_30 [16];
  int local_20;
  
  if (param_2 != (char *)0x0) {
    local_20 = param_3;
    WongWork::CMCAPManager::setPoint((CMCAPManager *)(param_2 + 0x8e3f0),*(ushort *)(param_3 + 0xe))
    ;
    uVar2 = WongWork::CMCAPManager::getPoint((CMCAPManager *)(param_2 + 0x8e3f0));
    uVar1 = *(ushort *)(local_20 + 0xe);
    uVar3 = CUser::get_acc_id((CUser *)param_2);
    uVar4 = NumberToString(uVar3,0);
    cMyTrace::cMyTrace(local_30,
                       "virtual int Inter_Set_CleanPad_Point::dispatch_sig(CUser*, char*, int)",
                       0x4886,0);
    cMyTrace::operator()
              (local_30,"CLEANPAD_POINT_CONTROL / m_id : %s , Point : %d (getPorint : %d)",uVar4,
               (uint)uVar1,uVar2);
  }
  return 0;
}
```
