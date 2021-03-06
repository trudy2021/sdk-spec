<?php
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: messaging_state.proto

namespace Com\Elarian\Hera\Proto;

use Google\Protobuf\Internal\GPBType;
use Google\Protobuf\Internal\RepeatedField;
use Google\Protobuf\Internal\GPBUtil;

/**
 * Generated from protobuf message <code>com.elarian.hera.proto.MessageReplyToken</code>
 */
class MessageReplyToken extends \Google\Protobuf\Internal\Message
{
    /**
     * Generated from protobuf field <code>string token = 1;</code>
     */
    protected $token = '';
    /**
     * Generated from protobuf field <code>.google.protobuf.Timestamp expires_at = 2;</code>
     */
    protected $expires_at = null;

    /**
     * Constructor.
     *
     * @param array $data {
     *     Optional. Data for populating the Message object.
     *
     *     @type string $token
     *     @type \Google\Protobuf\Timestamp $expires_at
     * }
     */
    public function __construct($data = NULL) {
        \GPBMetadata\MessagingState::initOnce();
        parent::__construct($data);
    }

    /**
     * Generated from protobuf field <code>string token = 1;</code>
     * @return string
     */
    public function getToken()
    {
        return $this->token;
    }

    /**
     * Generated from protobuf field <code>string token = 1;</code>
     * @param string $var
     * @return $this
     */
    public function setToken($var)
    {
        GPBUtil::checkString($var, True);
        $this->token = $var;

        return $this;
    }

    /**
     * Generated from protobuf field <code>.google.protobuf.Timestamp expires_at = 2;</code>
     * @return \Google\Protobuf\Timestamp
     */
    public function getExpiresAt()
    {
        return isset($this->expires_at) ? $this->expires_at : null;
    }

    public function hasExpiresAt()
    {
        return isset($this->expires_at);
    }

    public function clearExpiresAt()
    {
        unset($this->expires_at);
    }

    /**
     * Generated from protobuf field <code>.google.protobuf.Timestamp expires_at = 2;</code>
     * @param \Google\Protobuf\Timestamp $var
     * @return $this
     */
    public function setExpiresAt($var)
    {
        GPBUtil::checkMessage($var, \Google\Protobuf\Timestamp::class);
        $this->expires_at = $var;

        return $this;
    }

}

