# Dispatcher_PutItemForEnchant

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 0820b09a Dispatcher_PutItemForEnchant::dispatch_sig  [0x0820b09a-0x820b179] ===
 820b09a:	55                   	push   %ebp
 820b09b:	89 e5                	mov    %esp,%ebp
 820b09d:	83 ec 28             	sub    $0x28,%esp
 820b0a0:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 820b0a7:	00 
 820b0a8:	8b 45 10             	mov    0x10(%ebp),%eax
 820b0ab:	89 04 24             	mov    %eax,(%esp)
 820b0ae:	e8 4f 06 02 00       	call   822b702 <_ZN9PacketBuf10get_packetEi>
 820b0b3:	89 45 f4             	mov    %eax,-0xc(%ebp)
 820b0b6:	8b 45 0c             	mov    0xc(%ebp),%eax
 820b0b9:	89 04 24             	mov    %eax,(%esp)
 820b0bc:	e8 71 53 f1 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 820b0c1:	85 c0                	test   %eax,%eax
 820b0c3:	0f 94 c0             	sete   %al
 820b0c6:	84 c0                	test   %al,%al
 820b0c8:	74 29                	je     820b0f3 <_ZN28Dispatcher_PutItemForEnchant12dispatch_sigEP5CUserR9PacketBuf+0x59>
 820b0ca:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 820b0d1:	00 
 820b0d2:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 820b0d9:	00 
 820b0da:	c7 44 24 04 20 e2 bc 	movl   $0x8bce220,0x4(%esp)
 820b0e1:	08 
 820b0e2:	c7 04 24 44 a7 00 00 	movl   $0xa744,(%esp)
 820b0e9:	e8 e9 57 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 820b0ee:	e9 84 00 00 00       	jmp    820b177 <_ZN28Dispatcher_PutItemForEnchant12dispatch_sigEP5CUserR9PacketBuf+0xdd>
 820b0f3:	8b 45 0c             	mov    0xc(%ebp),%eax
 820b0f6:	89 04 24             	mov    %eax,(%esp)
 820b0f9:	e8 d6 47 02 00       	call   822f8d4 <_ZNK15CUserCharacInfo21GetCurCharacExpertJobEv>
 820b0fe:	85 c0                	test   %eax,%eax
 820b100:	0f 94 c0             	sete   %al
 820b103:	84 c0                	test   %al,%al
 820b105:	74 07                	je     820b10e <_ZN28Dispatcher_PutItemForEnchant12dispatch_sigEP5CUserR9PacketBuf+0x74>
 820b107:	b8 00 00 00 00       	mov    $0x0,%eax
 820b10c:	eb 69                	jmp    820b177 <_ZN28Dispatcher_PutItemForEnchant12dispatch_sigEP5CUserR9PacketBuf+0xdd>
 820b10e:	8b 45 0c             	mov    0xc(%ebp),%eax
 820b111:	89 04 24             	mov    %eax,(%esp)
 820b114:	e8 bb 47 02 00       	call   822f8d4 <_ZNK15CUserCharacInfo21GetCurCharacExpertJobEv>
 820b119:	89 04 24             	mov    %eax,(%esp)
 820b11c:	e8 75 96 02 00       	call   8234796 <_ZN10expert_job10CExpertJob7GetTypeEv>
 820b121:	83 f8 01             	cmp    $0x1,%eax
 820b124:	0f 95 c0             	setne  %al
 820b127:	84 c0                	test   %al,%al
 820b129:	74 26                	je     820b151 <_ZN28Dispatcher_PutItemForEnchant12dispatch_sigEP5CUserR9PacketBuf+0xb7>
 820b12b:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 820b132:	00 
 820b133:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 820b13a:	00 
 820b13b:	c7 44 24 04 20 e2 bc 	movl   $0x8bce220,0x4(%esp)
 820b142:	08 
 820b143:	c7 04 24 4b a7 00 00 	movl   $0xa74b,(%esp)
 820b14a:	e8 88 57 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 820b14f:	eb 26                	jmp    820b177 <_ZN28Dispatcher_PutItemForEnchant12dispatch_sigEP5CUserR9PacketBuf+0xdd>
 820b151:	8b 45 0c             	mov    0xc(%ebp),%eax
 820b154:	89 04 24             	mov    %eax,(%esp)
 820b157:	e8 78 47 02 00       	call   822f8d4 <_ZNK15CUserCharacInfo21GetCurCharacExpertJobEv>
 820b15c:	8b 55 f4             	mov    -0xc(%ebp),%edx
 820b15f:	89 54 24 08          	mov    %edx,0x8(%esp)
 820b163:	8b 55 0c             	mov    0xc(%ebp),%edx
 820b166:	89 54 24 04          	mov    %edx,0x4(%esp)
 820b16a:	89 04 24             	mov    %eax,(%esp)
 820b16d:	e8 ec 2d 29 00       	call   849df5e <_ZN10expert_job10CEnchanter19OnPutItemForEnchantEP5CUserP18MSG_STATIC_COMMAND>
 820b172:	b8 00 00 00 00       	mov    $0x0,%eax
 820b177:	c9                   	leave
 820b178:	c3                   	ret
 820b179:	90                   	nop

```

```c
// Dispatcher_PutItemForEnchant::dispatch_sig @ 0x820b09a

/* Dispatcher_PutItemForEnchant::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_PutItemForEnchant::dispatch_sig
          (Dispatcher_PutItemForEnchant *this,CUser *param_1,PacketBuf *param_2)

{
  MSG_STATIC_COMMAND *pMVar1;
  int iVar2;
  undefined4 uVar3;
  CExpertJob *this_00;
  CEnchanter *this_01;
  
  pMVar1 = (MSG_STATIC_COMMAND *)PacketBuf::get_packet(param_2,0);
  iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
  if (iVar2 == 0) {
    uVar3 = LineFunc(0xa744,
                     "virtual int Dispatcher_PutItemForEnchant::dispatch_sig(CUser*, PacketBuf&)",0,
                     0);
  }
  else {
    iVar2 = CUserCharacInfo::GetCurCharacExpertJob((CUserCharacInfo *)param_1);
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      this_00 = (CExpertJob *)CUserCharacInfo::GetCurCharacExpertJob((CUserCharacInfo *)param_1);
      iVar2 = expert_job::CExpertJob::GetType(this_00);
      if (iVar2 == 1) {
        this_01 = (CEnchanter *)CUserCharacInfo::GetCurCharacExpertJob((CUserCharacInfo *)param_1);
        expert_job::CEnchanter::OnPutItemForEnchant(this_01,param_1,pMVar1);
        uVar3 = 0;
      }
      else {
        uVar3 = LineFunc(0xa74b,
                         "virtual int Dispatcher_PutItemForEnchant::dispatch_sig(CUser*, PacketBuf&)"
                         ,0,0);
      }
    }
  }
  return uVar3;
}

```

