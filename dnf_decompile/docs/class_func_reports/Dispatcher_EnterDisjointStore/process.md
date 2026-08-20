# process

`_ZN29Dispatcher_EnterDisjointStore7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_EnterDisjointStore::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_EnterDisjointStore` | `0x081d01ae` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d01ae  _ZN29Dispatcher_EnterDisjointStore7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_EnterDisjointStore::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081d01ae, 0x081d0285]
081d01ae +0x00:  push   %ebp
081d01af +0x01:  mov    %esp,%ebp
081d01b1 +0x03:  push   %ebx
081d01b2 +0x04:  sub    $0x24,%esp
081d01b5 +0x07:  mov    0x14(%ebp),%eax
081d01b8 +0x0a:  mov    %eax,-0x18(%ebp)
081d01bb +0x0d:  mov    0x14(%ebp),%eax
081d01be +0x10:  mov    %eax,0xc(%esp)
081d01c2 +0x14:  mov    0x10(%ebp),%eax
081d01c5 +0x17:  mov    %eax,0x8(%esp)
081d01c9 +0x1b:  mov    0xc(%ebp),%eax
081d01cc +0x1e:  mov    %eax,0x4(%esp)
081d01d0 +0x22:  mov    0x8(%ebp),%eax
081d01d3 +0x25:  mov    %eax,(%esp)
081d01d6 +0x28:  call   081d00d8 <_ZN29Dispatcher_EnterDisjointStore11check_errorEP5CUserR8MSG_BASER9ParamBase>  ; Dispatcher_EnterDisjointStore::check_error(CUser*, MSG_BASE&, ParamBase&)
081d01db +0x2d:  mov    %eax,%edx
081d01dd +0x2f:  mov    -0x18(%ebp),%eax
081d01e0 +0x32:  mov    %edx,0x4(%eax)
081d01e3 +0x35:  mov    -0x18(%ebp),%eax
081d01e6 +0x38:  mov    0x4(%eax),%eax
081d01e9 +0x3b:  test   %eax,%eax
081d01eb +0x3d:  jle    081d01f7 <+0x49>
081d01ed +0x3f:  mov    $0x0,%eax
081d01f2 +0x44:  jmp    081d0280 <+0xd2>
081d01f7 +0x49:  mov    -0x18(%ebp),%eax
081d01fa +0x4c:  mov    0x4(%eax),%eax
081d01fd +0x4f:  test   %eax,%eax
081d01ff +0x51:  jns    081d0230 <+0x82>
081d0201 +0x53:  mov    0xc(%ebp),%eax
081d0204 +0x56:  mov    %eax,(%esp)
081d0207 +0x59:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081d020c +0x5e:  mov    -0x18(%ebp),%edx
081d020f +0x61:  mov    0x4(%edx),%edx
081d0212 +0x64:  mov    %eax,0xc(%esp)
081d0216 +0x68:  mov    %edx,0x8(%esp)
081d021a +0x6c:  movl   $&_ZZN29Dispatcher_EnterDisjointStore7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
081d0222 +0x74:  movl   $0x2adf,(%esp)
081d0229 +0x7b:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081d022e +0x80:  jmp    081d0280 <+0xd2>
081d0230 +0x82:  mov    0x10(%ebp),%eax
081d0233 +0x85:  mov    %eax,-0x14(%ebp)
081d0236 +0x88:  mov    -0x14(%ebp),%eax
081d0239 +0x8b:  movzwl 0xe(%eax),%eax
081d023d +0x8f:  movzwl %ax,%ebx
081d0240 +0x92:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
081d0245 +0x97:  mov    %ebx,0x4(%esp)
081d0249 +0x9b:  mov    %eax,(%esp)
081d024c +0x9e:  call   086c4b9c <_ZN9GameWorld15find_from_worldEt>  ; GameWorld::find_from_world(unsigned short)
081d0251 +0xa3:  mov    %eax,-0x10(%ebp)
081d0254 +0xa6:  movl   $0x0,-0xc(%ebp)
081d025b +0xad:  mov    -0x10(%ebp),%eax
081d025e +0xb0:  mov    %eax,(%esp)
081d0261 +0xb3:  call   0822f8d4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4f7e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4f7e
081d0266 +0xb8:  mov    %eax,-0xc(%ebp)
081d0269 +0xbb:  mov    0xc(%ebp),%eax
081d026c +0xbe:  mov    %eax,0x4(%esp)
081d0270 +0xc2:  mov    -0xc(%ebp),%eax
081d0273 +0xc5:  mov    %eax,(%esp)
081d0276 +0xc8:  call   085d309a <_ZN10expert_job11CDisjointer20OnEnterDisjointStoreEP5CUser>  ; expert_job::CDisjointer::OnEnterDisjointStore(CUser*)
081d027b +0xcd:  mov    $0x0,%eax
081d0280 +0xd2:  add    $0x24,%esp
081d0283 +0xd5:  pop    %ebx
081d0284 +0xd6:  pop    %ebp
081d0285 +0xd7:  ret
```

## 反编译 C

```c
// Dispatcher_EnterDisjointStore::process @ 0x81d01ae

/* Dispatcher_EnterDisjointStore::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_EnterDisjointStore::process
          (Dispatcher_EnterDisjointStore *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  ushort uVar1;
  undefined4 uVar2;
  uint uVar3;
  GameWorld *this_00;
  CUserCharacInfo *this_01;
  CDisjointer *this_02;
  
  uVar2 = check_error((CUser *)this,(MSG_BASE *)param_1,(ParamBase *)param_2);
  *(undefined4 *)(param_3 + 4) = uVar2;
  if (*(int *)(param_3 + 4) < 1) {
    if (*(int *)(param_3 + 4) < 0) {
      uVar3 = CUser::get_acc_id(param_1);
      uVar2 = LineFunc(0x2adf,
                       "virtual int Dispatcher_EnterDisjointStore::process(CUser*, MSG_BASE&, ParamBase&)"
                       ,*(int *)(param_3 + 4),uVar3);
    }
    else {
      uVar1 = *(ushort *)(param_2 + 0xe);
      this_00 = (GameWorld *)G_GameWorld();
      this_01 = (CUserCharacInfo *)GameWorld::find_from_world(this_00,uVar1);
      this_02 = (CDisjointer *)CUserCharacInfo::GetCurCharacExpertJob(this_01);
      expert_job::CDisjointer::OnEnterDisjointStore(this_02,param_1);
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
