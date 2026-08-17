# Dispatcher_GuildCargoPushItem

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## check_error

```asm
// === 081d0f64 Dispatcher_GuildCargoPushItem::check_error  [0x081d0f64-0x81d10d3] ===
 81d0f64:	55                   	push   %ebp
 81d0f65:	89 e5                	mov    %esp,%ebp
 81d0f67:	53                   	push   %ebx
 81d0f68:	83 ec 74             	sub    $0x74,%esp
 81d0f6b:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d0f6e:	89 04 24             	mov    %eax,(%esp)
 81d0f71:	e8 16 94 f0 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81d0f76:	83 f8 03             	cmp    $0x3,%eax
 81d0f79:	75 0f                	jne    81d0f8a <_ZN29Dispatcher_GuildCargoPushItem11check_errorEP5CUserR8MSG_BASER9ParamBase+0x26>
 81d0f7b:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d0f7e:	89 04 24             	mov    %eax,(%esp)
 81d0f81:	e8 ac f4 f4 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 81d0f86:	85 c0                	test   %eax,%eax
 81d0f88:	75 07                	jne    81d0f91 <_ZN29Dispatcher_GuildCargoPushItem11check_errorEP5CUserR8MSG_BASER9ParamBase+0x2d>
 81d0f8a:	b8 01 00 00 00       	mov    $0x1,%eax
 81d0f8f:	eb 05                	jmp    81d0f96 <_ZN29Dispatcher_GuildCargoPushItem11check_errorEP5CUserR8MSG_BASER9ParamBase+0x32>
 81d0f91:	b8 00 00 00 00       	mov    $0x0,%eax
 81d0f96:	84 c0                	test   %al,%al
 81d0f98:	74 0a                	je     81d0fa4 <_ZN29Dispatcher_GuildCargoPushItem11check_errorEP5CUserR8MSG_BASER9ParamBase+0x40>
 81d0f9a:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81d0f9f:	e9 2b 01 00 00       	jmp    81d10cf <_ZN29Dispatcher_GuildCargoPushItem11check_errorEP5CUserR8MSG_BASER9ParamBase+0x16b>
 81d0fa4:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d0fa7:	89 04 24             	mov    %eax,(%esp)
 81d0faa:	e8 bd e4 05 00       	call   822f46c <_ZN15CUserCharacInfo19get_charac_guildkeyEv>
 81d0faf:	85 c0                	test   %eax,%eax
 81d0fb1:	0f 94 c0             	sete   %al
 81d0fb4:	84 c0                	test   %al,%al
 81d0fb6:	74 0a                	je     81d0fc2 <_ZN29Dispatcher_GuildCargoPushItem11check_errorEP5CUserR8MSG_BASER9ParamBase+0x5e>
 81d0fb8:	b8 64 00 00 00       	mov    $0x64,%eax
 81d0fbd:	e9 0d 01 00 00       	jmp    81d10cf <_ZN29Dispatcher_GuildCargoPushItem11check_errorEP5CUserR8MSG_BASER9ParamBase+0x16b>
 81d0fc2:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d0fc5:	89 04 24             	mov    %eax,(%esp)
 81d0fc8:	e8 0b f2 05 00       	call   82301d8 <_ZN5CUser16IsExistGuildAgitEv>
 81d0fcd:	83 f0 01             	xor    $0x1,%eax
 81d0fd0:	84 c0                	test   %al,%al
 81d0fd2:	74 0a                	je     81d0fde <_ZN29Dispatcher_GuildCargoPushItem11check_errorEP5CUserR8MSG_BASER9ParamBase+0x7a>
 81d0fd4:	b8 b5 00 00 00       	mov    $0xb5,%eax
 81d0fd9:	e9 f1 00 00 00       	jmp    81d10cf <_ZN29Dispatcher_GuildCargoPushItem11check_errorEP5CUserR8MSG_BASER9ParamBase+0x16b>
 81d0fde:	8b 45 10             	mov    0x10(%ebp),%eax
 81d0fe1:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 81d0fe4:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d0fe7:	89 04 24             	mov    %eax,(%esp)
 81d0fea:	e8 8f 92 f0 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 81d0fef:	89 45 e8             	mov    %eax,-0x18(%ebp)
 81d0ff2:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81d0ff5:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81d0ff9:	0f b6 c0             	movzbl %al,%eax
 81d0ffc:	89 04 24             	mov    %eax,(%esp)
 81d0fff:	e8 41 68 f2 ff       	call   80f7845 <_Z25GetInvenTypeFromItemSpace14ENUM_ITEMSPACE>
 81d1004:	89 45 ec             	mov    %eax,-0x14(%ebp)
 81d1007:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81d100a:	0f b7 40 0e          	movzwl 0xe(%eax),%eax
 81d100e:	0f b7 c8             	movzwl %ax,%ecx
 81d1011:	8b 55 ec             	mov    -0x14(%ebp),%edx
 81d1014:	8d 45 a7             	lea    -0x59(%ebp),%eax
 81d1017:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 81d101b:	89 54 24 08          	mov    %edx,0x8(%esp)
 81d101f:	8b 55 e8             	mov    -0x18(%ebp),%edx
 81d1022:	89 54 24 04          	mov    %edx,0x4(%esp)
 81d1026:	89 04 24             	mov    %eax,(%esp)
 81d1029:	e8 ea a8 32 00       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 81d102e:	83 ec 04             	sub    $0x4,%esp
 81d1031:	a1 cc f7 41 09       	mov    0x941f7cc,%eax
 81d1036:	c7 44 24 08 08 00 00 	movl   $0x8,0x8(%esp)
 81d103d:	00 
 81d103e:	8b 55 0c             	mov    0xc(%ebp),%edx
 81d1041:	89 54 24 04          	mov    %edx,0x4(%esp)
 81d1045:	89 04 24             	mov    %eax,(%esp)
 81d1048:	e8 b5 79 0b 00       	call   8288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>
 81d104d:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81d1050:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 81d1054:	74 05                	je     81d105b <_ZN29Dispatcher_GuildCargoPushItem11check_errorEP5CUserR8MSG_BASER9ParamBase+0xf7>
 81d1056:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81d1059:	eb 74                	jmp    81d10cf <_ZN29Dispatcher_GuildCargoPushItem11check_errorEP5CUserR8MSG_BASER9ParamBase+0x16b>
 81d105b:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81d105e:	0f b7 40 0e          	movzwl 0xe(%eax),%eax
 81d1062:	0f b7 d0             	movzwl %ax,%edx
 81d1065:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81d1068:	89 54 24 08          	mov    %edx,0x8(%esp)
 81d106c:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d1070:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d1073:	89 04 24             	mov    %eax,(%esp)
 81d1076:	e8 c7 58 47 00       	call   8646942 <_ZNK5CUser13CheckItemLockEii>
 81d107b:	84 c0                	test   %al,%al
 81d107d:	74 07                	je     81d1086 <_ZN29Dispatcher_GuildCargoPushItem11check_errorEP5CUserR8MSG_BASER9ParamBase+0x122>
 81d107f:	b8 d5 00 00 00       	mov    $0xd5,%eax
 81d1084:	eb 49                	jmp    81d10cf <_ZN29Dispatcher_GuildCargoPushItem11check_errorEP5CUserR8MSG_BASER9ParamBase+0x16b>
 81d1086:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81d1089:	8b 40 10             	mov    0x10(%eax),%eax
 81d108c:	85 c0                	test   %eax,%eax
 81d108e:	74 0d                	je     81d109d <_ZN29Dispatcher_GuildCargoPushItem11check_errorEP5CUserR8MSG_BASER9ParamBase+0x139>
 81d1090:	8b 55 a9             	mov    -0x57(%ebp),%edx
 81d1093:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81d1096:	8b 40 10             	mov    0x10(%eax),%eax
 81d1099:	39 c2                	cmp    %eax,%edx
 81d109b:	74 07                	je     81d10a4 <_ZN29Dispatcher_GuildCargoPushItem11check_errorEP5CUserR8MSG_BASER9ParamBase+0x140>
 81d109d:	b8 c5 00 00 00       	mov    $0xc5,%eax
 81d10a2:	eb 2b                	jmp    81d10cf <_ZN29Dispatcher_GuildCargoPushItem11check_errorEP5CUserR8MSG_BASER9ParamBase+0x16b>
 81d10a4:	8b 45 a9             	mov    -0x57(%ebp),%eax
 81d10a7:	89 c3                	mov    %eax,%ebx
 81d10a9:	e8 ed b0 ef ff       	call   80cc19b <_Z14G_CDataManagerv>
 81d10ae:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81d10b2:	89 04 24             	mov    %eax,(%esp)
 81d10b5:	e8 78 e9 18 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 81d10ba:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81d10bd:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81d10c1:	75 07                	jne    81d10ca <_ZN29Dispatcher_GuildCargoPushItem11check_errorEP5CUserR8MSG_BASER9ParamBase+0x166>
 81d10c3:	b8 c5 00 00 00       	mov    $0xc5,%eax
 81d10c8:	eb 05                	jmp    81d10cf <_ZN29Dispatcher_GuildCargoPushItem11check_errorEP5CUserR8MSG_BASER9ParamBase+0x16b>
 81d10ca:	b8 00 00 00 00       	mov    $0x0,%eax
 81d10cf:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 81d10d2:	c9                   	leave
 81d10d3:	c3                   	ret

```

```c
// Dispatcher_GuildCargoPushItem::check_error @ 0x81d0f64

/* Dispatcher_GuildCargoPushItem::check_error(CUser*, MSG_BASE&, ParamBase&) */

int Dispatcher_GuildCargoPushItem::check_error(CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  CDataManager *this;
  uint uVar4;
  undefined1 local_5d [2];
  int local_5b;
  ParamBase *local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  iVar3 = CUser::get_state((CUser *)param_2);
  if ((iVar3 == 3) &&
     (iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2), iVar3 != 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    local_14 = -1;
  }
  else {
    iVar3 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_2);
    if (iVar3 == 0) {
      local_14 = 100;
    }
    else {
      cVar2 = CUser::IsExistGuildAgit((CUser *)param_2);
      if (cVar2 == '\x01') {
        local_20 = param_3;
        local_1c = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_2);
        local_18 = GetInvenTypeFromItemSpace(local_20[0xd]);
        uVar4 = (uint)*(ushort *)(local_20 + 0xe);
        CInventory::GetInvenSlot((int)local_5d,local_1c);
        local_14 = CSecu_ProtectionField::Check(GlobalData::s_pSecuProtectionField,param_2,8,uVar4);
        if (local_14 == 0) {
          cVar2 = CUser::CheckItemLock((CUser *)param_2,local_18,(uint)*(ushort *)(local_20 + 0xe));
          if (cVar2 == '\0') {
            if ((*(int *)(local_20 + 0x10) == 0) || (local_5b != *(int *)(local_20 + 0x10))) {
              local_14 = 0xc5;
            }
            else {
              this = (CDataManager *)G_CDataManager();
              iVar3 = CDataManager::find_item(this,local_5b);
              if (iVar3 == 0) {
                local_14 = 0xc5;
              }
              else {
                local_14 = 0;
              }
            }
          }
          else {
            local_14 = 0xd5;
          }
        }
      }
      else {
        local_14 = 0xb5;
      }
    }
  }
  return local_14;
}

```

---

## process

```asm
// === 081d10d4 Dispatcher_GuildCargoPushItem::process  [0x081d10d4-0x81d1315] ===
 81d10d4:	55                   	push   %ebp
 81d10d5:	89 e5                	mov    %esp,%ebp
 81d10d7:	57                   	push   %edi
 81d10d8:	56                   	push   %esi
 81d10d9:	53                   	push   %ebx
 81d10da:	81 ec cc 00 00 00    	sub    $0xcc,%esp
 81d10e0:	8b 45 14             	mov    0x14(%ebp),%eax
 81d10e3:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 81d10e6:	8b 45 14             	mov    0x14(%ebp),%eax
 81d10e9:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81d10ed:	8b 45 10             	mov    0x10(%ebp),%eax
 81d10f0:	89 44 24 08          	mov    %eax,0x8(%esp)
 81d10f4:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d10f7:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d10fb:	8b 45 08             	mov    0x8(%ebp),%eax
 81d10fe:	89 04 24             	mov    %eax,(%esp)
 81d1101:	e8 5e fe ff ff       	call   81d0f64 <_ZN29Dispatcher_GuildCargoPushItem11check_errorEP5CUserR8MSG_BASER9ParamBase>
 81d1106:	89 c2                	mov    %eax,%edx
 81d1108:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81d110b:	89 50 04             	mov    %edx,0x4(%eax)
 81d110e:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81d1111:	8b 40 04             	mov    0x4(%eax),%eax
 81d1114:	85 c0                	test   %eax,%eax
 81d1116:	7e 0a                	jle    81d1122 <_ZN29Dispatcher_GuildCargoPushItem7processEP5CUserR8MSG_BASER9ParamBase+0x4e>
 81d1118:	b8 00 00 00 00       	mov    $0x0,%eax
 81d111d:	e9 e8 01 00 00       	jmp    81d130a <_ZN29Dispatcher_GuildCargoPushItem7processEP5CUserR8MSG_BASER9ParamBase+0x236>
 81d1122:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81d1125:	8b 40 04             	mov    0x4(%eax),%eax
 81d1128:	85 c0                	test   %eax,%eax
 81d112a:	79 2b                	jns    81d1157 <_ZN29Dispatcher_GuildCargoPushItem7processEP5CUserR8MSG_BASER9ParamBase+0x83>
 81d112c:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81d112f:	8b 40 04             	mov    0x4(%eax),%eax
 81d1132:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81d1139:	00 
 81d113a:	89 44 24 08          	mov    %eax,0x8(%esp)
 81d113e:	c7 44 24 04 a0 3b bd 	movl   $0x8bd3ba0,0x4(%esp)
 81d1145:	08 
 81d1146:	c7 04 24 f0 2c 00 00 	movl   $0x2cf0,(%esp)
 81d114d:	e8 85 f7 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81d1152:	e9 b3 01 00 00       	jmp    81d130a <_ZN29Dispatcher_GuildCargoPushItem7processEP5CUserR8MSG_BASER9ParamBase+0x236>
 81d1157:	8b 45 10             	mov    0x10(%ebp),%eax
 81d115a:	89 45 d8             	mov    %eax,-0x28(%ebp)
 81d115d:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d1160:	89 04 24             	mov    %eax,(%esp)
 81d1163:	e8 16 91 f0 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 81d1168:	89 45 dc             	mov    %eax,-0x24(%ebp)
 81d116b:	8b 45 d8             	mov    -0x28(%ebp),%eax
 81d116e:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81d1172:	0f b6 c0             	movzbl %al,%eax
 81d1175:	89 04 24             	mov    %eax,(%esp)
 81d1178:	e8 c8 66 f2 ff       	call   80f7845 <_Z25GetInvenTypeFromItemSpace14ENUM_ITEMSPACE>
 81d117d:	89 45 e0             	mov    %eax,-0x20(%ebp)
 81d1180:	8b 45 d8             	mov    -0x28(%ebp),%eax
 81d1183:	0f b7 40 0e          	movzwl 0xe(%eax),%eax
 81d1187:	0f b7 c8             	movzwl %ax,%ecx
 81d118a:	8b 55 e0             	mov    -0x20(%ebp),%edx
 81d118d:	8d 85 71 ff ff ff    	lea    -0x8f(%ebp),%eax
 81d1193:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 81d1197:	89 54 24 08          	mov    %edx,0x8(%esp)
 81d119b:	8b 55 dc             	mov    -0x24(%ebp),%edx
 81d119e:	89 54 24 04          	mov    %edx,0x4(%esp)
 81d11a2:	89 04 24             	mov    %eax,(%esp)
 81d11a5:	e8 6e a7 32 00       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 81d11aa:	83 ec 04             	sub    $0x4,%esp
 81d11ad:	8b 85 73 ff ff ff    	mov    -0x8d(%ebp),%eax
 81d11b3:	89 c3                	mov    %eax,%ebx
 81d11b5:	e8 e1 af ef ff       	call   80cc19b <_Z14G_CDataManagerv>
 81d11ba:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81d11be:	89 04 24             	mov    %eax,(%esp)
 81d11c1:	e8 6c e8 18 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 81d11c6:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 81d11c9:	8d 45 ae             	lea    -0x52(%ebp),%eax
 81d11cc:	89 04 24             	mov    %eax,(%esp)
 81d11cf:	e8 ee ac 05 00       	call   822bec2 <_ZN40Packet_Guild_Check_Guild_Cargo_Push_ItemC1Ev>
 81d11d4:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d11d7:	89 04 24             	mov    %eax,(%esp)
 81d11da:	e8 8d e2 05 00       	call   822f46c <_ZN15CUserCharacInfo19get_charac_guildkeyEv>
 81d11df:	89 45 b8             	mov    %eax,-0x48(%ebp)
 81d11e2:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d11e5:	89 04 24             	mov    %eax,(%esp)
 81d11e8:	e8 61 aa ef ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 81d11ed:	89 45 bc             	mov    %eax,-0x44(%ebp)
 81d11f0:	8b 45 d8             	mov    -0x28(%ebp),%eax
 81d11f3:	8b 40 10             	mov    0x10(%eax),%eax
 81d11f6:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 81d11f9:	8b 45 d8             	mov    -0x28(%ebp),%eax
 81d11fc:	0f b7 40 18          	movzwl 0x18(%eax),%eax
 81d1200:	0f b7 c0             	movzwl %ax,%eax
 81d1203:	89 45 c0             	mov    %eax,-0x40(%ebp)
 81d1206:	8b 45 d8             	mov    -0x28(%ebp),%eax
 81d1209:	8b 40 14             	mov    0x14(%eax),%eax
 81d120c:	89 45 c8             	mov    %eax,-0x38(%ebp)
 81d120f:	8b 45 d8             	mov    -0x28(%ebp),%eax
 81d1212:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81d1216:	88 45 d1             	mov    %al,-0x2f(%ebp)
 81d1219:	8b 45 d8             	mov    -0x28(%ebp),%eax
 81d121c:	0f b7 40 0e          	movzwl 0xe(%eax),%eax
 81d1220:	66 89 45 d2          	mov    %ax,-0x2e(%ebp)
 81d1224:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81d1227:	89 04 24             	mov    %eax,(%esp)
 81d122a:	e8 cb 00 f2 ff       	call   80f12fa <_ZNK5CItem12is_stackableEv>
 81d122f:	84 c0                	test   %al,%al
 81d1231:	74 07                	je     81d123a <_ZN29Dispatcher_GuildCargoPushItem7processEP5CUserR8MSG_BASER9ParamBase+0x166>
 81d1233:	b8 01 00 00 00       	mov    $0x1,%eax
 81d1238:	eb 05                	jmp    81d123f <_ZN29Dispatcher_GuildCargoPushItem7processEP5CUserR8MSG_BASER9ParamBase+0x16b>
 81d123a:	b8 00 00 00 00       	mov    $0x0,%eax
 81d123f:	88 45 d0             	mov    %al,-0x30(%ebp)
 81d1242:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81d1245:	89 04 24             	mov    %eax,(%esp)
 81d1248:	e8 ad 00 f2 ff       	call   80f12fa <_ZNK5CItem12is_stackableEv>
 81d124d:	84 c0                	test   %al,%al
 81d124f:	74 10                	je     81d1261 <_ZN29Dispatcher_GuildCargoPushItem7processEP5CUserR8MSG_BASER9ParamBase+0x18d>
 81d1251:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81d1254:	89 04 24             	mov    %eax,(%esp)
 81d1257:	e8 a0 b7 05 00       	call   822c9fc <_ZNK14CStackableItem17getStackableLimitEv>
 81d125c:	89 45 cc             	mov    %eax,-0x34(%ebp)
 81d125f:	eb 07                	jmp    81d1268 <_ZN29Dispatcher_GuildCargoPushItem7processEP5CUserR8MSG_BASER9ParamBase+0x194>
 81d1261:	c7 45 cc 01 00 00 00 	movl   $0x1,-0x34(%ebp)
 81d1268:	0f b7 45 b0          	movzwl -0x50(%ebp),%eax
 81d126c:	0f b7 f0             	movzwl %ax,%esi
 81d126f:	8d 5d ae             	lea    -0x52(%ebp),%ebx
 81d1272:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d1275:	89 04 24             	mov    %eax,(%esp)
 81d1278:	e8 13 aa ef ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 81d127d:	8b 15 2c be 40 09    	mov    0x940be2c,%edx
 81d1283:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d1287:	89 14 24             	mov    %edx,(%esp)
 81d128a:	e8 29 c1 f4 ff       	call   811d3b8 <_ZN15CServerProxyMgrI17CGuildServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 81d128f:	89 74 24 08          	mov    %esi,0x8(%esp)
 81d1293:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81d1297:	89 04 24             	mov    %eax,(%esp)
 81d129a:	e8 2f ca 29 00       	call   846dcce <_ZN17CGuildServerProxy13SendTcpPacketEPci>
 81d129f:	0f b6 45 d0          	movzbl -0x30(%ebp),%eax
 81d12a3:	0f b6 c0             	movzbl %al,%eax
 81d12a6:	89 85 64 ff ff ff    	mov    %eax,-0x9c(%ebp)
 81d12ac:	0f b7 45 d2          	movzwl -0x2e(%ebp),%eax
 81d12b0:	0f b7 f8             	movzwl %ax,%edi
 81d12b3:	0f b6 45 d1          	movzbl -0x2f(%ebp),%eax
 81d12b7:	0f b6 f0             	movzbl %al,%esi
 81d12ba:	8b 5d c8             	mov    -0x38(%ebp),%ebx
 81d12bd:	8b 4d c4             	mov    -0x3c(%ebp),%ecx
 81d12c0:	8b 55 c0             	mov    -0x40(%ebp),%edx
 81d12c3:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d12c6:	05 00 97 07 00       	add    $0x79700,%eax
 81d12cb:	89 85 54 ff ff ff    	mov    %eax,-0xac(%ebp)
 81d12d1:	8b 85 64 ff ff ff    	mov    -0x9c(%ebp),%eax
 81d12d7:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 81d12db:	89 7c 24 18          	mov    %edi,0x18(%esp)
 81d12df:	89 74 24 14          	mov    %esi,0x14(%esp)
 81d12e3:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 81d12e7:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 81d12eb:	89 54 24 08          	mov    %edx,0x8(%esp)
 81d12ef:	c7 44 24 04 05 00 00 	movl   $0x5,0x4(%esp)
 81d12f6:	00 
 81d12f7:	8b 85 54 ff ff ff    	mov    -0xac(%ebp),%eax
 81d12fd:	89 04 24             	mov    %eax,(%esp)
 81d1300:	e8 97 52 4b 00       	call   868659c <_ZN15cUserHistoryLog23GuildCargoCheckPushItemE31ENUM_GUILD_CARGO_HISTORY_REASONiiiiii>
 81d1305:	b8 00 00 00 00       	mov    $0x0,%eax
 81d130a:	8d 65 f4             	lea    -0xc(%ebp),%esp
 81d130d:	83 c4 00             	add    $0x0,%esp
 81d1310:	5b                   	pop    %ebx
 81d1311:	5e                   	pop    %esi
 81d1312:	5f                   	pop    %edi
 81d1313:	5d                   	pop    %ebp
 81d1314:	c3                   	ret
 81d1315:	90                   	nop

```

```c
// Dispatcher_GuildCargoPushItem::process @ 0x81d10d4

/* Dispatcher_GuildCargoPushItem::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_GuildCargoPushItem::process
          (Dispatcher_GuildCargoPushItem *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  char cVar1;
  undefined4 uVar2;
  CDataManager *this_00;
  CGuildServerProxy *this_01;
  CUser *pCVar3;
  MSG_BASE *pMVar4;
  undefined1 local_93 [2];
  int local_91;
  Packet_Guild_Check_Guild_Cargo_Push_Item local_56 [2];
  ushort local_54;
  undefined4 local_4c;
  undefined4 local_48;
  uint local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 local_34;
  MSG_BASE local_33;
  undefined2 local_32;
  ParamBase *local_30;
  MSG_BASE *local_2c;
  int local_28;
  undefined4 local_24;
  CItem *local_20;
  
  local_30 = param_3;
  pCVar3 = param_1;
  pMVar4 = param_2;
  uVar2 = check_error((CUser *)this,(MSG_BASE *)param_1,(ParamBase *)param_2);
  *(undefined4 *)(local_30 + 4) = uVar2;
  if (*(int *)(local_30 + 4) < 1) {
    if (*(int *)(local_30 + 4) < 0) {
      uVar2 = LineFunc(0x2cf0,
                       "virtual int Dispatcher_GuildCargoPushItem::process(CUser*, MSG_BASE&, ParamBase&)"
                       ,*(int *)(local_30 + 4),0);
    }
    else {
      local_2c = param_2;
      local_28 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
      local_24 = GetInvenTypeFromItemSpace(local_2c[0xd],pCVar3,pMVar4,param_3);
      CInventory::GetInvenSlot((int)local_93,local_28);
      this_00 = (CDataManager *)G_CDataManager();
      local_20 = (CItem *)CDataManager::find_item(this_00,local_91);
      Packet_Guild_Check_Guild_Cargo_Push_Item::Packet_Guild_Check_Guild_Cargo_Push_Item(local_56);
      local_4c = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_1);
      local_48 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
      local_40 = *(undefined4 *)(local_2c + 0x10);
      local_44 = (uint)*(ushort *)(local_2c + 0x18);
      local_3c = *(undefined4 *)(local_2c + 0x14);
      local_33 = local_2c[0xd];
      local_32 = *(undefined2 *)(local_2c + 0xe);
      cVar1 = CItem::is_stackable(local_20);
      local_34 = cVar1 != '\0';
      cVar1 = CItem::is_stackable(local_20);
      if (cVar1 == '\0') {
        local_38 = 1;
      }
      else {
        local_38 = CStackableItem::getStackableLimit((CStackableItem *)local_20);
      }
      uVar2 = CUser::GetServerGroup(param_1);
      this_01 = (CGuildServerProxy *)
                CServerProxyMgr<CGuildServerProxy>::GetServerProxy
                          (GlobalData::s_guild_proxy_mgr,uVar2);
      CGuildServerProxy::SendTcpPacket(this_01,(char *)local_56,(uint)local_54);
      cUserHistoryLog::GuildCargoCheckPushItem
                ((cUserHistoryLog *)(param_1 + 0x79700),5,local_44,local_40,local_3c,local_33,
                 local_32,local_34);
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## read

```asm
// === 081d0dfe Dispatcher_GuildCargoPushItem::read  [0x081d0dfe-0x81d0f63] ===
 81d0dfe:	55                   	push   %ebp
 81d0dff:	89 e5                	mov    %esp,%ebp
 81d0e01:	83 ec 28             	sub    $0x28,%esp
 81d0e04:	8b 45 10             	mov    0x10(%ebp),%eax
 81d0e07:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81d0e0a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d0e0d:	83 c0 0d             	add    $0xd,%eax
 81d0e10:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d0e14:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d0e17:	89 04 24             	mov    %eax,(%esp)
 81d0e1a:	e8 51 c1 3b 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 81d0e1f:	83 f0 01             	xor    $0x1,%eax
 81d0e22:	84 c0                	test   %al,%al
 81d0e24:	74 29                	je     81d0e4f <_ZN29Dispatcher_GuildCargoPushItem4readER9PacketBufR8MSG_BASE+0x51>
 81d0e26:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81d0e2d:	00 
 81d0e2e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81d0e35:	00 
 81d0e36:	c7 44 24 04 00 3c bd 	movl   $0x8bd3c00,0x4(%esp)
 81d0e3d:	08 
 81d0e3e:	c7 04 24 91 2c 00 00 	movl   $0x2c91,(%esp)
 81d0e45:	e8 8d fa 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81d0e4a:	e9 13 01 00 00       	jmp    81d0f62 <_ZN29Dispatcher_GuildCargoPushItem4readER9PacketBufR8MSG_BASE+0x164>
 81d0e4f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d0e52:	83 c0 0e             	add    $0xe,%eax
 81d0e55:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d0e59:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d0e5c:	89 04 24             	mov    %eax,(%esp)
 81d0e5f:	e8 4c c2 3b 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 81d0e64:	83 f0 01             	xor    $0x1,%eax
 81d0e67:	84 c0                	test   %al,%al
 81d0e69:	74 29                	je     81d0e94 <_ZN29Dispatcher_GuildCargoPushItem4readER9PacketBufR8MSG_BASE+0x96>
 81d0e6b:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81d0e72:	00 
 81d0e73:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81d0e7a:	00 
 81d0e7b:	c7 44 24 04 00 3c bd 	movl   $0x8bd3c00,0x4(%esp)
 81d0e82:	08 
 81d0e83:	c7 04 24 92 2c 00 00 	movl   $0x2c92,(%esp)
 81d0e8a:	e8 48 fa 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81d0e8f:	e9 ce 00 00 00       	jmp    81d0f62 <_ZN29Dispatcher_GuildCargoPushItem4readER9PacketBufR8MSG_BASE+0x164>
 81d0e94:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d0e97:	83 c0 10             	add    $0x10,%eax
 81d0e9a:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d0e9e:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d0ea1:	89 04 24             	mov    %eax,(%esp)
 81d0ea4:	e8 47 c2 3b 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 81d0ea9:	83 f0 01             	xor    $0x1,%eax
 81d0eac:	84 c0                	test   %al,%al
 81d0eae:	74 29                	je     81d0ed9 <_ZN29Dispatcher_GuildCargoPushItem4readER9PacketBufR8MSG_BASE+0xdb>
 81d0eb0:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81d0eb7:	00 
 81d0eb8:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81d0ebf:	00 
 81d0ec0:	c7 44 24 04 00 3c bd 	movl   $0x8bd3c00,0x4(%esp)
 81d0ec7:	08 
 81d0ec8:	c7 04 24 93 2c 00 00 	movl   $0x2c93,(%esp)
 81d0ecf:	e8 03 fa 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81d0ed4:	e9 89 00 00 00       	jmp    81d0f62 <_ZN29Dispatcher_GuildCargoPushItem4readER9PacketBufR8MSG_BASE+0x164>
 81d0ed9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d0edc:	83 c0 14             	add    $0x14,%eax
 81d0edf:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d0ee3:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d0ee6:	89 04 24             	mov    %eax,(%esp)
 81d0ee9:	e8 02 c2 3b 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 81d0eee:	83 f0 01             	xor    $0x1,%eax
 81d0ef1:	84 c0                	test   %al,%al
 81d0ef3:	74 26                	je     81d0f1b <_ZN29Dispatcher_GuildCargoPushItem4readER9PacketBufR8MSG_BASE+0x11d>
 81d0ef5:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81d0efc:	00 
 81d0efd:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81d0f04:	00 
 81d0f05:	c7 44 24 04 00 3c bd 	movl   $0x8bd3c00,0x4(%esp)
 81d0f0c:	08 
 81d0f0d:	c7 04 24 94 2c 00 00 	movl   $0x2c94,(%esp)
 81d0f14:	e8 be f9 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81d0f19:	eb 47                	jmp    81d0f62 <_ZN29Dispatcher_GuildCargoPushItem4readER9PacketBufR8MSG_BASE+0x164>
 81d0f1b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d0f1e:	83 c0 18             	add    $0x18,%eax
 81d0f21:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d0f25:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d0f28:	89 04 24             	mov    %eax,(%esp)
 81d0f2b:	e8 80 c1 3b 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 81d0f30:	83 f0 01             	xor    $0x1,%eax
 81d0f33:	84 c0                	test   %al,%al
 81d0f35:	74 26                	je     81d0f5d <_ZN29Dispatcher_GuildCargoPushItem4readER9PacketBufR8MSG_BASE+0x15f>
 81d0f37:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81d0f3e:	00 
 81d0f3f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81d0f46:	00 
 81d0f47:	c7 44 24 04 00 3c bd 	movl   $0x8bd3c00,0x4(%esp)
 81d0f4e:	08 
 81d0f4f:	c7 04 24 95 2c 00 00 	movl   $0x2c95,(%esp)
 81d0f56:	e8 7c f9 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81d0f5b:	eb 05                	jmp    81d0f62 <_ZN29Dispatcher_GuildCargoPushItem4readER9PacketBufR8MSG_BASE+0x164>
 81d0f5d:	b8 00 00 00 00       	mov    $0x0,%eax
 81d0f62:	c9                   	leave
 81d0f63:	c3                   	ret

```

```c
// Dispatcher_GuildCargoPushItem::read @ 0x81d0dfe

/* Dispatcher_GuildCargoPushItem::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_GuildCargoPushItem::read
          (Dispatcher_GuildCargoPushItem *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_byte(param_1,(uchar *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_short(param_1,(ushort *)(param_2 + 0xe));
    if (cVar1 == '\x01') {
      cVar1 = PacketBuf::get_int(param_1,(int *)(param_2 + 0x10));
      if (cVar1 == '\x01') {
        cVar1 = PacketBuf::get_int(param_1,(int *)(param_2 + 0x14));
        if (cVar1 == '\x01') {
          cVar1 = PacketBuf::get_short(param_1,(ushort *)(param_2 + 0x18));
          if (cVar1 == '\x01') {
            uVar2 = 0;
          }
          else {
            uVar2 = LineFunc(0x2c95,
                             "virtual int Dispatcher_GuildCargoPushItem::read(PacketBuf&, MSG_BASE&)"
                             ,0,0);
          }
        }
        else {
          uVar2 = LineFunc(0x2c94,
                           "virtual int Dispatcher_GuildCargoPushItem::read(PacketBuf&, MSG_BASE&)",
                           0,0);
        }
      }
      else {
        uVar2 = LineFunc(0x2c93,
                         "virtual int Dispatcher_GuildCargoPushItem::read(PacketBuf&, MSG_BASE&)",0,
                         0);
      }
    }
    else {
      uVar2 = LineFunc(0x2c92,
                       "virtual int Dispatcher_GuildCargoPushItem::read(PacketBuf&, MSG_BASE&)",0,0)
      ;
    }
  }
  else {
    uVar2 = LineFunc(0x2c91,"virtual int Dispatcher_GuildCargoPushItem::read(PacketBuf&, MSG_BASE&)"
                     ,0,0);
  }
  return uVar2;
}

```

---

## send

```asm
// === 081d1316 Dispatcher_GuildCargoPushItem::send  [0x081d1316-0x81d1387] ===
 81d1316:	55                   	push   %ebp
 81d1317:	89 e5                	mov    %esp,%ebp
 81d1319:	83 ec 28             	sub    $0x28,%esp
 81d131c:	8b 45 10             	mov    0x10(%ebp),%eax
 81d131f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81d1322:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d1325:	8b 40 04             	mov    0x4(%eax),%eax
 81d1328:	85 c0                	test   %eax,%eax
 81d132a:	74 5a                	je     81d1386 <_ZN29Dispatcher_GuildCargoPushItem4sendEP5CUserR9ParamBase+0x70>
 81d132c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d132f:	8b 40 04             	mov    0x4(%eax),%eax
 81d1332:	83 f8 64             	cmp    $0x64,%eax
 81d1335:	74 0d                	je     81d1344 <_ZN29Dispatcher_GuildCargoPushItem4sendEP5CUserR9ParamBase+0x2e>
 81d1337:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d133a:	8b 40 04             	mov    0x4(%eax),%eax
 81d133d:	3d b5 00 00 00       	cmp    $0xb5,%eax
 81d1342:	75 22                	jne    81d1366 <_ZN29Dispatcher_GuildCargoPushItem4sendEP5CUserR9ParamBase+0x50>
 81d1344:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d1347:	8b 40 04             	mov    0x4(%eax),%eax
 81d134a:	0f b6 c0             	movzbl %al,%eax
 81d134d:	89 44 24 08          	mov    %eax,0x8(%esp)
 81d1351:	c7 44 24 04 09 01 00 	movl   $0x109,0x4(%esp)
 81d1358:	00 
 81d1359:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d135c:	89 04 24             	mov    %eax,(%esp)
 81d135f:	e8 de ab 4a 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81d1364:	eb 20                	jmp    81d1386 <_ZN29Dispatcher_GuildCargoPushItem4sendEP5CUserR9ParamBase+0x70>
 81d1366:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d1369:	8b 40 04             	mov    0x4(%eax),%eax
 81d136c:	0f b6 c0             	movzbl %al,%eax
 81d136f:	89 44 24 08          	mov    %eax,0x8(%esp)
 81d1373:	c7 44 24 04 fb 00 00 	movl   $0xfb,0x4(%esp)
 81d137a:	00 
 81d137b:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d137e:	89 04 24             	mov    %eax,(%esp)
 81d1381:	e8 bc ab 4a 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81d1386:	c9                   	leave
 81d1387:	c3                   	ret

```

```c
// Dispatcher_GuildCargoPushItem::send @ 0x81d1316

/* Dispatcher_GuildCargoPushItem::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_GuildCargoPushItem::send
          (Dispatcher_GuildCargoPushItem *this,CUser *param_1,ParamBase *param_2)

{
  if (*(int *)(param_2 + 4) != 0) {
    if ((*(int *)(param_2 + 4) == 100) || (*(int *)(param_2 + 4) == 0xb5)) {
      CUser::SendCmdErrorPacket(param_1,0x109,*(uint *)(param_2 + 4) & 0xff);
    }
    else {
      CUser::SendCmdErrorPacket(param_1,0xfb,*(uint *)(param_2 + 4) & 0xff);
    }
  }
  return;
}

```

