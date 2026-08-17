# Dispatcher_SelectStriker

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## check_error

```asm
// === 081e4066 Dispatcher_SelectStriker::check_error  [0x081e4066-0x81e42ed] ===
 81e4066:	55                   	push   %ebp
 81e4067:	89 e5                	mov    %esp,%ebp
 81e4069:	57                   	push   %edi
 81e406a:	56                   	push   %esi
 81e406b:	53                   	push   %ebx
 81e406c:	83 ec 3c             	sub    $0x3c,%esp
 81e406f:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 81e4073:	75 0a                	jne    81e407f <_ZN24Dispatcher_SelectStriker11check_errorEP5CUserR8MSG_BASE+0x19>
 81e4075:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81e407a:	e9 67 02 00 00       	jmp    81e42e6 <_ZN24Dispatcher_SelectStriker11check_errorEP5CUserR8MSG_BASE+0x280>
 81e407f:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e4082:	89 04 24             	mov    %eax,(%esp)
 81e4085:	e8 02 63 ef ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81e408a:	83 f8 03             	cmp    $0x3,%eax
 81e408d:	0f 95 c0             	setne  %al
 81e4090:	84 c0                	test   %al,%al
 81e4092:	74 0a                	je     81e409e <_ZN24Dispatcher_SelectStriker11check_errorEP5CUserR8MSG_BASE+0x38>
 81e4094:	b8 ff ff ff 7f       	mov    $0x7fffffff,%eax
 81e4099:	e9 48 02 00 00       	jmp    81e42e6 <_ZN24Dispatcher_SelectStriker11check_errorEP5CUserR8MSG_BASE+0x280>
 81e409e:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e40a1:	89 04 24             	mov    %eax,(%esp)
 81e40a4:	e8 89 c3 f3 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 81e40a9:	85 c0                	test   %eax,%eax
 81e40ab:	0f 94 c0             	sete   %al
 81e40ae:	84 c0                	test   %al,%al
 81e40b0:	74 0a                	je     81e40bc <_ZN24Dispatcher_SelectStriker11check_errorEP5CUserR8MSG_BASE+0x56>
 81e40b2:	b8 ff ff ff 7f       	mov    $0x7fffffff,%eax
 81e40b7:	e9 2a 02 00 00       	jmp    81e42e6 <_ZN24Dispatcher_SelectStriker11check_errorEP5CUserR8MSG_BASE+0x280>
 81e40bc:	8b 45 10             	mov    0x10(%ebp),%eax
 81e40bf:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 81e40c2:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 81e40c9:	ff 
 81e40ca:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e40cd:	89 04 24             	mov    %eax,(%esp)
 81e40d0:	e8 cb 9e 46 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 81e40d5:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e40d9:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e40dc:	89 04 24             	mov    %eax,(%esp)
 81e40df:	e8 2e 9e 46 00       	call   864df12 <_ZNK5CUser14get_charac_idxEj>
 81e40e4:	89 45 d8             	mov    %eax,-0x28(%ebp)
 81e40e7:	83 7d d8 ff          	cmpl   $0xffffffff,-0x28(%ebp)
 81e40eb:	75 0a                	jne    81e40f7 <_ZN24Dispatcher_SelectStriker11check_errorEP5CUserR8MSG_BASE+0x91>
 81e40ed:	b8 39 00 00 00       	mov    $0x39,%eax
 81e40f2:	e9 ef 01 00 00       	jmp    81e42e6 <_ZN24Dispatcher_SelectStriker11check_errorEP5CUserR8MSG_BASE+0x280>
 81e40f7:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81e40fa:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81e40fe:	0f be c0             	movsbl %al,%eax
 81e4101:	3b 45 d8             	cmp    -0x28(%ebp),%eax
 81e4104:	75 53                	jne    81e4159 <_ZN24Dispatcher_SelectStriker11check_errorEP5CUserR8MSG_BASE+0xf3>
 81e4106:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e4109:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81e4110:	00 
 81e4111:	89 04 24             	mov    %eax,(%esp)
 81e4114:	e8 cb af 04 00       	call   822f0e4 <_ZN15CUserCharacInfo23setCurCharacTagCharacNoEj>
 81e4119:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e411c:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81e4123:	00 
 81e4124:	89 04 24             	mov    %eax,(%esp)
 81e4127:	e8 84 af 04 00       	call   822f0b0 <_ZN15CUserCharacInfo29setCurCharacStrikerSkillIndexEh>
 81e412c:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e412f:	05 f4 96 07 00       	add    $0x796f4,%eax
 81e4134:	89 04 24             	mov    %eax,(%esp)
 81e4137:	e8 9e ba 04 00       	call   822fbda <_ZN14CCharacterView20enableSaveCharacViewEv>
 81e413c:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e413f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81e4146:	00 
 81e4147:	89 04 24             	mov    %eax,(%esp)
 81e414a:	e8 3f a1 46 00       	call   864e28e <_ZN15CUserCharacInfo12setTagCharacEP12_Charac_info>
 81e414f:	b8 ff ff ff 7f       	mov    $0x7fffffff,%eax
 81e4154:	e9 8d 01 00 00       	jmp    81e42e6 <_ZN24Dispatcher_SelectStriker11check_errorEP5CUserR8MSG_BASE+0x280>
 81e4159:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81e415c:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81e4160:	84 c0                	test   %al,%al
 81e4162:	78 1b                	js     81e417f <_ZN24Dispatcher_SelectStriker11check_errorEP5CUserR8MSG_BASE+0x119>
 81e4164:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81e4167:	0f b6 58 0d          	movzbl 0xd(%eax),%ebx
 81e416b:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e416e:	05 e8 96 07 00       	add    $0x796e8,%eax
 81e4173:	89 04 24             	mov    %eax,(%esp)
 81e4176:	e8 1f ca fb ff       	call   81a0b9a <_ZNKSt6vectorI12_Charac_infoSaIS0_EE4sizeEv>
 81e417b:	38 c3                	cmp    %al,%bl
 81e417d:	7c 07                	jl     81e4186 <_ZN24Dispatcher_SelectStriker11check_errorEP5CUserR8MSG_BASE+0x120>
 81e417f:	b8 01 00 00 00       	mov    $0x1,%eax
 81e4184:	eb 05                	jmp    81e418b <_ZN24Dispatcher_SelectStriker11check_errorEP5CUserR8MSG_BASE+0x125>
 81e4186:	b8 00 00 00 00       	mov    $0x0,%eax
 81e418b:	84 c0                	test   %al,%al
 81e418d:	74 0a                	je     81e4199 <_ZN24Dispatcher_SelectStriker11check_errorEP5CUserR8MSG_BASE+0x133>
 81e418f:	b8 39 00 00 00       	mov    $0x39,%eax
 81e4194:	e9 4d 01 00 00       	jmp    81e42e6 <_ZN24Dispatcher_SelectStriker11check_errorEP5CUserR8MSG_BASE+0x280>
 81e4199:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81e419c:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81e41a0:	0f be c0             	movsbl %al,%eax
 81e41a3:	8b 55 0c             	mov    0xc(%ebp),%edx
 81e41a6:	81 c2 e8 96 07 00    	add    $0x796e8,%edx
 81e41ac:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e41b0:	89 14 24             	mov    %edx,(%esp)
 81e41b3:	e8 00 ca fb ff       	call   81a0bb8 <_ZNSt6vectorI12_Charac_infoSaIS0_EEixEj>
 81e41b8:	0f b7 40 27          	movzwl 0x27(%eax),%eax
 81e41bc:	0f bf d8             	movswl %ax,%ebx
 81e41bf:	e8 d7 7f ee ff       	call   80cc19b <_Z14G_CDataManagerv>
 81e41c4:	8b 80 9c 62 00 00    	mov    0x629c(%eax),%eax
 81e41ca:	39 c3                	cmp    %eax,%ebx
 81e41cc:	0f 9c c0             	setl   %al
 81e41cf:	84 c0                	test   %al,%al
 81e41d1:	74 0a                	je     81e41dd <_ZN24Dispatcher_SelectStriker11check_errorEP5CUserR8MSG_BASE+0x177>
 81e41d3:	b8 0e 00 00 00       	mov    $0xe,%eax
 81e41d8:	e9 09 01 00 00       	jmp    81e42e6 <_ZN24Dispatcher_SelectStriker11check_errorEP5CUserR8MSG_BASE+0x280>
 81e41dd:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81e41e0:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81e41e4:	0f be c0             	movsbl %al,%eax
 81e41e7:	8b 55 0c             	mov    0xc(%ebp),%edx
 81e41ea:	81 c2 e8 96 07 00    	add    $0x796e8,%edx
 81e41f0:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e41f4:	89 14 24             	mov    %edx,(%esp)
 81e41f7:	e8 bc c9 fb ff       	call   81a0bb8 <_ZNSt6vectorI12_Charac_infoSaIS0_EEixEj>
 81e41fc:	05 92 08 00 00       	add    $0x892,%eax
 81e4201:	89 04 24             	mov    %eax,(%esp)
 81e4204:	e8 a1 44 42 00       	call   86086aa <_ZN9SkillSlot18IsLoadStrikerSkillEv>
 81e4209:	83 f0 01             	xor    $0x1,%eax
 81e420c:	84 c0                	test   %al,%al
 81e420e:	74 0a                	je     81e421a <_ZN24Dispatcher_SelectStriker11check_errorEP5CUserR8MSG_BASE+0x1b4>
 81e4210:	b8 13 00 00 00       	mov    $0x13,%eax
 81e4215:	e9 cc 00 00 00       	jmp    81e42e6 <_ZN24Dispatcher_SelectStriker11check_errorEP5CUserR8MSG_BASE+0x280>
 81e421a:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81e421d:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81e4221:	0f be c0             	movsbl %al,%eax
 81e4224:	8b 55 0c             	mov    0xc(%ebp),%edx
 81e4227:	81 c2 e8 96 07 00    	add    $0x796e8,%edx
 81e422d:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e4231:	89 14 24             	mov    %edx,(%esp)
 81e4234:	e8 7f c9 fb ff       	call   81a0bb8 <_ZNSt6vectorI12_Charac_infoSaIS0_EEixEj>
 81e4239:	0f b6 40 26          	movzbl 0x26(%eax),%eax
 81e423d:	0f be c0             	movsbl %al,%eax
 81e4240:	89 45 dc             	mov    %eax,-0x24(%ebp)
 81e4243:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81e4246:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81e424a:	0f be c0             	movsbl %al,%eax
 81e424d:	8b 55 0c             	mov    0xc(%ebp),%edx
 81e4250:	81 c2 e8 96 07 00    	add    $0x796e8,%edx
 81e4256:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e425a:	89 14 24             	mov    %edx,(%esp)
 81e425d:	e8 56 c9 fb ff       	call   81a0bb8 <_ZNSt6vectorI12_Charac_infoSaIS0_EEixEj>
 81e4262:	0f b6 40 29          	movzbl 0x29(%eax),%eax
 81e4266:	c1 e0 04             	shl    $0x4,%eax
 81e4269:	c0 f8 04             	sar    $0x4,%al
 81e426c:	0f be c0             	movsbl %al,%eax
 81e426f:	89 45 e0             	mov    %eax,-0x20(%ebp)
 81e4272:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81e4275:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81e4279:	0f be c0             	movsbl %al,%eax
 81e427c:	8b 55 0c             	mov    0xc(%ebp),%edx
 81e427f:	81 c2 e8 96 07 00    	add    $0x796e8,%edx
 81e4285:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e4289:	89 14 24             	mov    %edx,(%esp)
 81e428c:	e8 27 c9 fb ff       	call   81a0bb8 <_ZNSt6vectorI12_Charac_infoSaIS0_EEixEj>
 81e4291:	0f b6 80 39 12 00 00 	movzbl 0x1239(%eax),%eax
 81e4298:	0f be c0             	movsbl %al,%eax
 81e429b:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 81e429e:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81e42a1:	0f b6 40 0e          	movzbl 0xe(%eax),%eax
 81e42a5:	0f b6 f8             	movzbl %al,%edi
 81e42a8:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81e42ab:	0f bf f0             	movswl %ax,%esi
 81e42ae:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81e42b1:	0f bf d8             	movswl %ax,%ebx
 81e42b4:	e8 e2 7e ee ff       	call   80cc19b <_Z14G_CDataManagerv>
 81e42b9:	8b 80 90 63 00 00    	mov    0x6390(%eax),%eax
 81e42bf:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 81e42c3:	89 74 24 08          	mov    %esi,0x8(%esp)
 81e42c7:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81e42cb:	89 04 24             	mov    %eax,(%esp)
 81e42ce:	e8 95 a5 8b 00       	call   8a9e868 <_ZN13StrikerScript15checkSkillIndexEssi>
 81e42d3:	83 f0 01             	xor    $0x1,%eax
 81e42d6:	84 c0                	test   %al,%al
 81e42d8:	74 07                	je     81e42e1 <_ZN24Dispatcher_SelectStriker11check_errorEP5CUserR8MSG_BASE+0x27b>
 81e42da:	b8 15 00 00 00       	mov    $0x15,%eax
 81e42df:	eb 05                	jmp    81e42e6 <_ZN24Dispatcher_SelectStriker11check_errorEP5CUserR8MSG_BASE+0x280>
 81e42e1:	b8 00 00 00 00       	mov    $0x0,%eax
 81e42e6:	83 c4 3c             	add    $0x3c,%esp
 81e42e9:	5b                   	pop    %ebx
 81e42ea:	5e                   	pop    %esi
 81e42eb:	5f                   	pop    %edi
 81e42ec:	5d                   	pop    %ebp
 81e42ed:	c3                   	ret

```

```c
// Dispatcher_SelectStriker::check_error @ 0x81e4066

/* Dispatcher_SelectStriker::check_error(CUser*, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_SelectStriker::check_error
          (Dispatcher_SelectStriker *this,CUser *param_1,MSG_BASE *param_2)

{
  MSG_BASE MVar1;
  char cVar2;
  short sVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  
  if (param_1 == (CUser *)0x0) {
    return 0xffffffff;
  }
  iVar6 = CUser::get_state(param_1);
  if (iVar6 != 3) {
    return 0x7fffffff;
  }
  iVar6 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
  if (iVar6 == 0) {
    return 0x7fffffff;
  }
  uVar7 = CUser::get_charac_no(param_1,-1);
  iVar6 = CUser::get_charac_idx(param_1,uVar7);
  if (iVar6 != -1) {
    if ((char)param_2[0xd] != iVar6) {
      if (((char)param_2[0xd] < '\0') ||
         (MVar1 = param_2[0xd],
         cVar5 = std::vector<_Charac_info,std::allocator<_Charac_info>>::size
                           ((vector<_Charac_info,std::allocator<_Charac_info>> *)(param_1 + 0x796e8)
                           ), cVar5 <= (char)MVar1)) {
        bVar4 = true;
      }
      else {
        bVar4 = false;
      }
      if (bVar4) {
        uVar8 = 0x39;
      }
      else {
        iVar6 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                          ((vector<_Charac_info,std::allocator<_Charac_info>> *)(param_1 + 0x796e8),
                           (int)(char)param_2[0xd]);
        sVar3 = *(short *)(iVar6 + 0x27);
        iVar6 = G_CDataManager();
        if ((int)sVar3 < *(int *)(iVar6 + 0x629c)) {
          uVar8 = 0xe;
        }
        else {
          iVar6 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                            ((vector<_Charac_info,std::allocator<_Charac_info>> *)
                             (param_1 + 0x796e8),(int)(char)param_2[0xd]);
          cVar5 = SkillSlot::IsLoadStrikerSkill((SkillSlot *)(iVar6 + 0x892));
          if (cVar5 == '\x01') {
            iVar6 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                              ((vector<_Charac_info,std::allocator<_Charac_info>> *)
                               (param_1 + 0x796e8),(int)(char)param_2[0xd]);
            cVar5 = *(char *)(iVar6 + 0x26);
            iVar6 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                              ((vector<_Charac_info,std::allocator<_Charac_info>> *)
                               (param_1 + 0x796e8),(int)(char)param_2[0xd]);
            cVar2 = *(char *)(iVar6 + 0x29);
            std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                      ((vector<_Charac_info,std::allocator<_Charac_info>> *)(param_1 + 0x796e8),
                       (int)(char)param_2[0xd]);
            MVar1 = param_2[0xe];
            iVar6 = G_CDataManager();
            cVar5 = StrikerScript::checkSkillIndex
                              (*(StrikerScript **)(iVar6 + 0x6390),(short)cVar5,
                               (short)((char)(cVar2 << 4) >> 4),(uint)(byte)MVar1);
            if (cVar5 == '\x01') {
              uVar8 = 0;
            }
            else {
              uVar8 = 0x15;
            }
          }
          else {
            uVar8 = 0x13;
          }
        }
      }
      return uVar8;
    }
    CUserCharacInfo::setCurCharacTagCharacNo((CUserCharacInfo *)param_1,0);
    CUserCharacInfo::setCurCharacStrikerSkillIndex((CUserCharacInfo *)param_1,'\0');
    CCharacterView::enableSaveCharacView((CCharacterView *)(param_1 + 0x796f4));
    CUserCharacInfo::setTagCharac((CUserCharacInfo *)param_1,(_Charac_info *)0x0);
    return 0x7fffffff;
  }
  return 0x39;
}

```

---

## process

```asm
// === 081e3dca Dispatcher_SelectStriker::process  [0x081e3dca-0x81e4065] ===
 81e3dca:	55                   	push   %ebp
 81e3dcb:	89 e5                	mov    %esp,%ebp
 81e3dcd:	56                   	push   %esi
 81e3dce:	53                   	push   %ebx
 81e3dcf:	83 ec 30             	sub    $0x30,%esp
 81e3dd2:	8b 45 14             	mov    0x14(%ebp),%eax
 81e3dd5:	89 45 ec             	mov    %eax,-0x14(%ebp)
 81e3dd8:	8b 45 10             	mov    0x10(%ebp),%eax
 81e3ddb:	89 44 24 08          	mov    %eax,0x8(%esp)
 81e3ddf:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e3de2:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e3de6:	8b 45 08             	mov    0x8(%ebp),%eax
 81e3de9:	89 04 24             	mov    %eax,(%esp)
 81e3dec:	e8 75 02 00 00       	call   81e4066 <_ZN24Dispatcher_SelectStriker11check_errorEP5CUserR8MSG_BASE>
 81e3df1:	8b 55 ec             	mov    -0x14(%ebp),%edx
 81e3df4:	89 42 04             	mov    %eax,0x4(%edx)
 81e3df7:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81e3dfa:	8b 40 04             	mov    0x4(%eax),%eax
 81e3dfd:	85 c0                	test   %eax,%eax
 81e3dff:	7e 0a                	jle    81e3e0b <_ZN24Dispatcher_SelectStriker7processEP5CUserR8MSG_BASER9ParamBase+0x41>
 81e3e01:	b8 00 00 00 00       	mov    $0x0,%eax
 81e3e06:	e9 54 02 00 00       	jmp    81e405f <_ZN24Dispatcher_SelectStriker7processEP5CUserR8MSG_BASER9ParamBase+0x295>
 81e3e0b:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81e3e0e:	8b 40 04             	mov    0x4(%eax),%eax
 81e3e11:	85 c0                	test   %eax,%eax
 81e3e13:	79 2b                	jns    81e3e40 <_ZN24Dispatcher_SelectStriker7processEP5CUserR8MSG_BASER9ParamBase+0x76>
 81e3e15:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81e3e18:	8b 40 04             	mov    0x4(%eax),%eax
 81e3e1b:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e3e22:	00 
 81e3e23:	89 44 24 08          	mov    %eax,0x8(%esp)
 81e3e27:	c7 44 24 04 c0 11 bd 	movl   $0x8bd11c0,0x4(%esp)
 81e3e2e:	08 
 81e3e2f:	c7 04 24 93 5b 00 00 	movl   $0x5b93,(%esp)
 81e3e36:	e8 9c ca 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81e3e3b:	e9 1f 02 00 00       	jmp    81e405f <_ZN24Dispatcher_SelectStriker7processEP5CUserR8MSG_BASER9ParamBase+0x295>
 81e3e40:	8b 45 10             	mov    0x10(%ebp),%eax
 81e3e43:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81e3e46:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81e3e49:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81e3e4d:	0f be c0             	movsbl %al,%eax
 81e3e50:	8b 55 0c             	mov    0xc(%ebp),%edx
 81e3e53:	81 c2 e8 96 07 00    	add    $0x796e8,%edx
 81e3e59:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e3e5d:	89 14 24             	mov    %edx,(%esp)
 81e3e60:	e8 53 cd fb ff       	call   81a0bb8 <_ZNSt6vectorI12_Charac_infoSaIS0_EEixEj>
 81e3e65:	0f b6 80 bc 14 00 00 	movzbl 0x14bc(%eax),%eax
 81e3e6c:	84 c0                	test   %al,%al
 81e3e6e:	0f 84 cb 00 00 00    	je     81e3f3f <_ZN24Dispatcher_SelectStriker7processEP5CUserR8MSG_BASER9ParamBase+0x175>
 81e3e74:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81e3e77:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81e3e7b:	0f be c0             	movsbl %al,%eax
 81e3e7e:	8b 55 0c             	mov    0xc(%ebp),%edx
 81e3e81:	81 c2 e8 96 07 00    	add    $0x796e8,%edx
 81e3e87:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e3e8b:	89 14 24             	mov    %edx,(%esp)
 81e3e8e:	e8 25 cd fb ff       	call   81a0bb8 <_ZNSt6vectorI12_Charac_infoSaIS0_EEixEj>
 81e3e93:	8b 10                	mov    (%eax),%edx
 81e3e95:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e3e98:	89 54 24 04          	mov    %edx,0x4(%esp)
 81e3e9c:	89 04 24             	mov    %eax,(%esp)
 81e3e9f:	e8 40 b2 04 00       	call   822f0e4 <_ZN15CUserCharacInfo23setCurCharacTagCharacNoEj>
 81e3ea4:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81e3ea7:	0f b6 40 0e          	movzbl 0xe(%eax),%eax
 81e3eab:	0f b6 d0             	movzbl %al,%edx
 81e3eae:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e3eb1:	89 54 24 04          	mov    %edx,0x4(%esp)
 81e3eb5:	89 04 24             	mov    %eax,(%esp)
 81e3eb8:	e8 f3 b1 04 00       	call   822f0b0 <_ZN15CUserCharacInfo29setCurCharacStrikerSkillIndexEh>
 81e3ebd:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e3ec0:	05 f4 96 07 00       	add    $0x796f4,%eax
 81e3ec5:	89 04 24             	mov    %eax,(%esp)
 81e3ec8:	e8 0d bd 04 00       	call   822fbda <_ZN14CCharacterView20enableSaveCharacViewEv>
 81e3ecd:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81e3ed0:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81e3ed4:	0f be c0             	movsbl %al,%eax
 81e3ed7:	8b 55 0c             	mov    0xc(%ebp),%edx
 81e3eda:	81 c2 e8 96 07 00    	add    $0x796e8,%edx
 81e3ee0:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e3ee4:	89 14 24             	mov    %edx,(%esp)
 81e3ee7:	e8 cc cc fb ff       	call   81a0bb8 <_ZNSt6vectorI12_Charac_infoSaIS0_EEixEj>
 81e3eec:	8b 55 0c             	mov    0xc(%ebp),%edx
 81e3eef:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e3ef3:	89 14 24             	mov    %edx,(%esp)
 81e3ef6:	e8 93 a3 46 00       	call   864e28e <_ZN15CUserCharacInfo12setTagCharacEP12_Charac_info>
 81e3efb:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e3efe:	89 04 24             	mov    %eax,(%esp)
 81e3f01:	e8 0a b2 04 00       	call   822f110 <_ZNK15CUserCharacInfo18getTagCharacInvenREv>
 81e3f06:	8b 55 0c             	mov    0xc(%ebp),%edx
 81e3f09:	89 54 24 04          	mov    %edx,0x4(%esp)
 81e3f0d:	89 04 24             	mov    %eax,(%esp)
 81e3f10:	e8 b1 97 04 00       	call   822d6c6 <_ZN10CInventory10set_parentEP5CUser>
 81e3f15:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e3f18:	89 04 24             	mov    %eax,(%esp)
 81e3f1b:	e8 00 b2 04 00       	call   822f120 <_ZNK15CUserCharacInfo18getTagCharacSkillREv>
 81e3f20:	8b 55 0c             	mov    0xc(%ebp),%edx
 81e3f23:	89 54 24 04          	mov    %edx,0x4(%esp)
 81e3f27:	89 04 24             	mov    %eax,(%esp)
 81e3f2a:	e8 ff ae 04 00       	call   822ee2e <_ZN9SkillSlot10set_parentEP5CUser>
 81e3f2f:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e3f32:	89 04 24             	mov    %eax,(%esp)
 81e3f35:	e8 be c4 4a 00       	call   86903f8 <_ZN5CUser17SendTagCharacInfoEv>
 81e3f3a:	e9 1b 01 00 00       	jmp    81e405a <_ZN24Dispatcher_SelectStriker7processEP5CUserR8MSG_BASER9ParamBase+0x290>
 81e3f3f:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 81e3f44:	c7 44 24 08 a6 5b 00 	movl   $0x5ba6,0x8(%esp)
 81e3f4b:	00 
 81e3f4c:	c7 44 24 04 64 14 bc 	movl   $0x8bc1464,0x4(%esp)
 81e3f53:	08 
 81e3f54:	89 04 24             	mov    %eax,(%esp)
 81e3f57:	e8 2a bb 0a 00       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 81e3f5c:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 81e3f63:	00 
 81e3f64:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e3f68:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81e3f6b:	89 04 24             	mov    %eax,(%esp)
 81e3f6e:	e8 b3 4c ee ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 81e3f73:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81e3f76:	89 04 24             	mov    %eax,(%esp)
 81e3f79:	e8 c8 4c ee ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 81e3f7e:	c7 44 24 04 fe 02 00 	movl   $0x2fe,0x4(%esp)
 81e3f85:	00 
 81e3f86:	89 04 24             	mov    %eax,(%esp)
 81e3f89:	e8 c8 4c ee ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 81e3f8e:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e3f91:	89 04 24             	mov    %eax,(%esp)
 81e3f94:	e8 fd 4c ee ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 81e3f99:	89 c3                	mov    %eax,%ebx
 81e3f9b:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81e3f9e:	89 04 24             	mov    %eax,(%esp)
 81e3fa1:	e8 a0 4c ee ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 81e3fa6:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81e3faa:	89 04 24             	mov    %eax,(%esp)
 81e3fad:	e8 a4 4c ee ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 81e3fb2:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81e3fb5:	89 04 24             	mov    %eax,(%esp)
 81e3fb8:	e8 91 4c ee ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 81e3fbd:	89 04 24             	mov    %eax,(%esp)
 81e3fc0:	e8 89 34 05 00       	call   823744e <_ZN12CStreamGuard11GetInBufferI27SIG_REQUEST_TAG_CHARAC_INFOEEPT_v>
 81e3fc5:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81e3fc8:	c7 44 24 08 4c 41 00 	movl   $0x414c,0x8(%esp)
 81e3fcf:	00 
 81e3fd0:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81e3fd7:	00 
 81e3fd8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e3fdb:	89 04 24             	mov    %eax,(%esp)
 81e3fde:	e8 dd 9c e9 ff       	call   807dcc0 <memset@plt>
 81e3fe3:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81e3fe6:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81e3fea:	0f be c0             	movsbl %al,%eax
 81e3fed:	8b 55 0c             	mov    0xc(%ebp),%edx
 81e3ff0:	81 c2 e8 96 07 00    	add    $0x796e8,%edx
 81e3ff6:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e3ffa:	89 14 24             	mov    %edx,(%esp)
 81e3ffd:	e8 b6 cb fb ff       	call   81a0bb8 <_ZNSt6vectorI12_Charac_infoSaIS0_EEixEj>
 81e4002:	8b 10                	mov    (%eax),%edx
 81e4004:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e4007:	89 10                	mov    %edx,(%eax)
 81e4009:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81e400c:	0f b6 50 0e          	movzbl 0xe(%eax),%edx
 81e4010:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e4013:	88 50 04             	mov    %dl,0x4(%eax)
 81e4016:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 81e401b:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 81e401e:	89 54 24 08          	mov    %edx,0x8(%esp)
 81e4022:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 81e4029:	00 
 81e402a:	89 04 24             	mov    %eax,(%esp)
 81e402d:	e8 ac cf 38 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 81e4032:	eb 1b                	jmp    81e404f <_ZN24Dispatcher_SelectStriker7processEP5CUserR8MSG_BASER9ParamBase+0x285>
 81e4034:	89 d3                	mov    %edx,%ebx
 81e4036:	89 c6                	mov    %eax,%esi
 81e4038:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81e403b:	89 04 24             	mov    %eax,(%esp)
 81e403e:	e8 8f 88 43 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 81e4043:	89 f0                	mov    %esi,%eax
 81e4045:	89 da                	mov    %ebx,%edx
 81e4047:	89 04 24             	mov    %eax,(%esp)
 81e404a:	e8 01 f7 8f 00       	call   8ae3750 <_Unwind_Resume>
 81e404f:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81e4052:	89 04 24             	mov    %eax,(%esp)
 81e4055:	e8 78 88 43 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 81e405a:	b8 00 00 00 00       	mov    $0x0,%eax
 81e405f:	83 c4 30             	add    $0x30,%esp
 81e4062:	5b                   	pop    %ebx
 81e4063:	5e                   	pop    %esi
 81e4064:	5d                   	pop    %ebp
 81e4065:	c3                   	ret

```

```c
// Dispatcher_SelectStriker::process @ 0x81e3dca

/* Dispatcher_SelectStriker::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_SelectStriker::process
          (Dispatcher_SelectStriker *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint *puVar3;
  _Charac_info *p_Var4;
  CInventory *this_00;
  SkillSlot *this_01;
  Stream *pSVar5;
  CStreamGuard *pCVar6;
  undefined4 *puVar7;
  CStreamGuard local_20 [8];
  ParamBase *local_18;
  MSG_BASE *local_14;
  SIG_REQUEST_TAG_CHARAC_INFO *local_10;
  
  local_18 = param_3;
  uVar1 = check_error(this,param_1,param_2);
  *(undefined4 *)(local_18 + 4) = uVar1;
  if (*(int *)(local_18 + 4) < 1) {
    if (*(int *)(local_18 + 4) < 0) {
      uVar1 = LineFunc(0x5b93,
                       "virtual int Dispatcher_SelectStriker::process(CUser*, MSG_BASE&, ParamBase&)"
                       ,*(int *)(local_18 + 4),0);
    }
    else {
      local_14 = param_2;
      iVar2 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(param_1 + 0x796e8),
                         (int)(char)param_2[0xd]);
      if (*(char *)(iVar2 + 0x14bc) == '\0') {
        pSVar5 = (Stream *)
                 StreamPool::Acquire(GlobalData::s_stream_pool,"PacketDispatcher_Impl_1.cpp",0x5ba6)
        ;
        CStreamGuard::CStreamGuard(local_20,pSVar5,true);
        pCVar6 = (CStreamGuard *)CStreamGuard::operator*(local_20);
                    /* try { // try from 081e3f89 to 081e4031 has its CatchHandler @ 081e4034 */
        CStreamGuard::operator<<(pCVar6,0x2fe);
        iVar2 = CUser::GetUID(param_1);
        pCVar6 = (CStreamGuard *)CStreamGuard::operator*(local_20);
        CStreamGuard::operator<<(pCVar6,iVar2);
        pCVar6 = (CStreamGuard *)CStreamGuard::operator->(local_20);
        local_10 = CStreamGuard::GetInBuffer<SIG_REQUEST_TAG_CHARAC_INFO>(pCVar6);
        memset(local_10,0,0x414c);
        puVar7 = (undefined4 *)
                 std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                           ((vector<_Charac_info,std::allocator<_Charac_info>> *)(param_1 + 0x796e8)
                            ,(int)(char)local_14[0xd]);
        *(undefined4 *)local_10 = *puVar7;
        local_10[4] = *(SIG_REQUEST_TAG_CHARAC_INFO *)(local_14 + 0xe);
        MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_20);
        CStreamGuard::~CStreamGuard(local_20);
      }
      else {
        puVar3 = (uint *)std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                                   ((vector<_Charac_info,std::allocator<_Charac_info>> *)
                                    (param_1 + 0x796e8),(int)(char)local_14[0xd]);
        CUserCharacInfo::setCurCharacTagCharacNo((CUserCharacInfo *)param_1,*puVar3);
        CUserCharacInfo::setCurCharacStrikerSkillIndex
                  ((CUserCharacInfo *)param_1,(uchar)local_14[0xe]);
        CCharacterView::enableSaveCharacView((CCharacterView *)(param_1 + 0x796f4));
        p_Var4 = (_Charac_info *)
                 std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                           ((vector<_Charac_info,std::allocator<_Charac_info>> *)(param_1 + 0x796e8)
                            ,(int)(char)local_14[0xd]);
        CUserCharacInfo::setTagCharac((CUserCharacInfo *)param_1,p_Var4);
        this_00 = (CInventory *)CUserCharacInfo::getTagCharacInvenR((CUserCharacInfo *)param_1);
        CInventory::set_parent(this_00,param_1);
        this_01 = (SkillSlot *)CUserCharacInfo::getTagCharacSkillR((CUserCharacInfo *)param_1);
        SkillSlot::set_parent(this_01,param_1);
        CUser::SendTagCharacInfo(param_1);
      }
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

```

---

## read

```asm
// === 081e3d32 Dispatcher_SelectStriker::read  [0x081e3d32-0x81e3dc9] ===
 81e3d32:	55                   	push   %ebp
 81e3d33:	89 e5                	mov    %esp,%ebp
 81e3d35:	83 ec 28             	sub    $0x28,%esp
 81e3d38:	8b 45 10             	mov    0x10(%ebp),%eax
 81e3d3b:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81e3d3e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e3d41:	83 c0 0d             	add    $0xd,%eax
 81e3d44:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e3d48:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e3d4b:	89 04 24             	mov    %eax,(%esp)
 81e3d4e:	e8 cf 91 3a 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 81e3d53:	83 f0 01             	xor    $0x1,%eax
 81e3d56:	84 c0                	test   %al,%al
 81e3d58:	74 26                	je     81e3d80 <_ZN24Dispatcher_SelectStriker4readER9PacketBufR8MSG_BASE+0x4e>
 81e3d5a:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e3d61:	00 
 81e3d62:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81e3d69:	00 
 81e3d6a:	c7 44 24 04 20 12 bd 	movl   $0x8bd1220,0x4(%esp)
 81e3d71:	08 
 81e3d72:	c7 04 24 81 5b 00 00 	movl   $0x5b81,(%esp)
 81e3d79:	e8 59 cb 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81e3d7e:	eb 47                	jmp    81e3dc7 <_ZN24Dispatcher_SelectStriker4readER9PacketBufR8MSG_BASE+0x95>
 81e3d80:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e3d83:	83 c0 0e             	add    $0xe,%eax
 81e3d86:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e3d8a:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e3d8d:	89 04 24             	mov    %eax,(%esp)
 81e3d90:	e8 db 91 3a 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 81e3d95:	83 f0 01             	xor    $0x1,%eax
 81e3d98:	84 c0                	test   %al,%al
 81e3d9a:	74 26                	je     81e3dc2 <_ZN24Dispatcher_SelectStriker4readER9PacketBufR8MSG_BASE+0x90>
 81e3d9c:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e3da3:	00 
 81e3da4:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81e3dab:	00 
 81e3dac:	c7 44 24 04 20 12 bd 	movl   $0x8bd1220,0x4(%esp)
 81e3db3:	08 
 81e3db4:	c7 04 24 84 5b 00 00 	movl   $0x5b84,(%esp)
 81e3dbb:	e8 17 cb 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81e3dc0:	eb 05                	jmp    81e3dc7 <_ZN24Dispatcher_SelectStriker4readER9PacketBufR8MSG_BASE+0x95>
 81e3dc2:	b8 00 00 00 00       	mov    $0x0,%eax
 81e3dc7:	c9                   	leave
 81e3dc8:	c3                   	ret
 81e3dc9:	90                   	nop

```

```c
// Dispatcher_SelectStriker::read @ 0x81e3d32

/* Dispatcher_SelectStriker::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_SelectStriker::read(Dispatcher_SelectStriker *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_byte(param_1,(uchar *)(param_2 + 0xe));
    if (cVar1 == '\x01') {
      uVar2 = 0;
    }
    else {
      uVar2 = LineFunc(0x5b84,"virtual int Dispatcher_SelectStriker::read(PacketBuf&, MSG_BASE&)",0,
                       0);
    }
  }
  else {
    uVar2 = LineFunc(0x5b81,"virtual int Dispatcher_SelectStriker::read(PacketBuf&, MSG_BASE&)",0,0)
    ;
  }
  return uVar2;
}

```

---

## send

```asm
// === 081e42ee Dispatcher_SelectStriker::send  [0x081e42ee-0x81e434b] ===
 81e42ee:	55                   	push   %ebp
 81e42ef:	89 e5                	mov    %esp,%ebp
 81e42f1:	83 ec 28             	sub    $0x28,%esp
 81e42f4:	8b 45 10             	mov    0x10(%ebp),%eax
 81e42f7:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81e42fa:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e42fd:	8b 40 04             	mov    0x4(%eax),%eax
 81e4300:	3d ff ff ff 7f       	cmp    $0x7fffffff,%eax
 81e4305:	74 41                	je     81e4348 <_ZN24Dispatcher_SelectStriker4sendEP5CUserR9ParamBase+0x5a>
 81e4307:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e430a:	8b 40 04             	mov    0x4(%eax),%eax
 81e430d:	85 c0                	test   %eax,%eax
 81e430f:	75 15                	jne    81e4326 <_ZN24Dispatcher_SelectStriker4sendEP5CUserR9ParamBase+0x38>
 81e4311:	c7 44 24 04 e8 01 00 	movl   $0x1e8,0x4(%esp)
 81e4318:	00 
 81e4319:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e431c:	89 04 24             	mov    %eax,(%esp)
 81e431f:	e8 7c 7b 49 00       	call   867bea0 <_ZN5CUser15SendCmdOkPacketE14ENUM_CMDPACKET>
 81e4324:	eb 23                	jmp    81e4349 <_ZN24Dispatcher_SelectStriker4sendEP5CUserR9ParamBase+0x5b>
 81e4326:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e4329:	8b 40 04             	mov    0x4(%eax),%eax
 81e432c:	0f b6 c0             	movzbl %al,%eax
 81e432f:	89 44 24 08          	mov    %eax,0x8(%esp)
 81e4333:	c7 44 24 04 e8 01 00 	movl   $0x1e8,0x4(%esp)
 81e433a:	00 
 81e433b:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e433e:	89 04 24             	mov    %eax,(%esp)
 81e4341:	e8 fc 7b 49 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81e4346:	eb 01                	jmp    81e4349 <_ZN24Dispatcher_SelectStriker4sendEP5CUserR9ParamBase+0x5b>
 81e4348:	90                   	nop
 81e4349:	c9                   	leave
 81e434a:	c3                   	ret
 81e434b:	90                   	nop

```

```c
// Dispatcher_SelectStriker::send @ 0x81e42ee

/* Dispatcher_SelectStriker::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_SelectStriker::send(Dispatcher_SelectStriker *this,CUser *param_1,ParamBase *param_2)

{
  if (*(int *)(param_2 + 4) != 0x7fffffff) {
    if (*(int *)(param_2 + 4) == 0) {
      CUser::SendCmdOkPacket(param_1,0x1e8);
    }
    else {
      CUser::SendCmdErrorPacket(param_1,0x1e8,*(uint *)(param_2 + 4) & 0xff);
    }
  }
  return;
}

```

