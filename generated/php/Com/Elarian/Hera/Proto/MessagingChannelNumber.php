<?php
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: messaging_model.proto

namespace Com\Elarian\Hera\Proto;

use Google\Protobuf\Internal\GPBType;
use Google\Protobuf\Internal\RepeatedField;
use Google\Protobuf\Internal\GPBUtil;

/**
 * Generated from protobuf message <code>com.elarian.hera.proto.MessagingChannelNumber</code>
 */
class MessagingChannelNumber extends \Google\Protobuf\Internal\Message
{
    /**
     * Generated from protobuf field <code>.com.elarian.hera.proto.MessagingChannel channel = 1;</code>
     */
    protected $channel = 0;
    /**
     * Generated from protobuf field <code>string number = 2;</code>
     */
    protected $number = '';

    /**
     * Constructor.
     *
     * @param array $data {
     *     Optional. Data for populating the Message object.
     *
     *     @type int $channel
     *     @type string $number
     * }
     */
    public function __construct($data = NULL) {
        \GPBMetadata\MessagingModel::initOnce();
        parent::__construct($data);
    }

    /**
     * Generated from protobuf field <code>.com.elarian.hera.proto.MessagingChannel channel = 1;</code>
     * @return int
     */
    public function getChannel()
    {
        return $this->channel;
    }

    /**
     * Generated from protobuf field <code>.com.elarian.hera.proto.MessagingChannel channel = 1;</code>
     * @param int $var
     * @return $this
     */
    public function setChannel($var)
    {
        GPBUtil::checkEnum($var, \Com\Elarian\Hera\Proto\MessagingChannel::class);
        $this->channel = $var;

        return $this;
    }

    /**
     * Generated from protobuf field <code>string number = 2;</code>
     * @return string
     */
    public function getNumber()
    {
        return $this->number;
    }

    /**
     * Generated from protobuf field <code>string number = 2;</code>
     * @param string $var
     * @return $this
     */
    public function setNumber($var)
    {
        GPBUtil::checkString($var, True);
        $this->number = $var;

        return $this;
    }

}

